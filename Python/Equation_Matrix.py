import numpy as np

class Equation(np.ndarray):
    def __init__(self, dim:int=None, deg:int=None, coefficients:list="Manual", syms:list=None, name:str='f'):
        
        if type(coefficients)==type([1,1]):
           # self.__class__.coeffCheck(coefficients)
            self.coefficients = np.array(coefficients)
            self.dimensions = self.coefficients.ndim
            if all(x==self.coefficients.shape[0] for x in self.coefficients.shape): self.degree=self.coefficients.shape[0]-1
            else: raise AttributeError("Coefficients must be a square matrix")
            self.syms = self.symSetUp(syms)
        
        elif dim!=None and deg!=None:
            self.degree = abs(int(deg))
            self.dimensions = abs(int(dim))
            self.syms = self.symSetUp(syms)
            self.coefficients = np.zeros(shape=tuple(self.degree+1 for _ in range(self.dimensions)))
            self.coeffSetUp()        
        
        else: raise AttributeError("Insuffcient Attribute provided for Equation Construction")   
        self.name=name
    
    def export(self) -> dict:
        dict={}
        dict["coefficients"]=self.coefficients.tolist()
        dict["syms"]=self.syms
        dict["dimensions"]=self.dimensions
        dict["degree"]=self.degree
        return dict

    def symSetUp(self,syms):
        if syms==None:
            return ["x","y","z","t","u","v","w","α","β","γ","ε","θ","κ","λ","μ","ρ","σ","φ"][:self.dimensions]
        elif len(syms)==self.dimensions:
            return syms
        elif len(syms)>self.dimensions:
            return syms[:self.dimensions]
        
        elif len(syms)<self.dimensions:
            dif=self.dimensions-len(syms)
            cache=["x","y","z","t","u","v","w","α","β","γ","ε","θ","κ","λ","μ","ρ","σ","φ"]
            syms+=[x for x in cache if x not in syms][:dif]
            return syms
                
    def coeffSetUp(self):
        sp=self.__class__.sp
        indices=list(x for x in np.ndindex(tuple(self.degree+1 for _ in range(self.dimensions))))
        indices.reverse()
        for index in indices:
            if sum(index)<=self.degree:
                string=""
                for x in range(self.dimensions): string+= f"{self.syms[x]}{sp(index[x])}"
                
                self.coefficients[index] = float(input(string + " "))
                if sum(index)>0:print(" + ", end="")

    def copy(self):
        return Equation(coefficients=self.coefficients.tolist(),syms=self.syms.copy(),name=self.name)

    def __call__(self, *args: float,) -> float:
        if type(args[0]) == type([1,1]): args=args[0]
        else: args=list(args)
        return self.f(args)

    def f(self, fval:list) -> float:
        
        for index in np.ndindex((self.degree+1 for _ in range(self.dimensions))):
            if sum(index)<=self.degree:
                val=1
                for i in range(self.dimensions):
                    val*= fval[i]**index[i]
                val*=self.coefficients[index]
        return val
                 
    def __add__(self,other):
        if type(other)==type(1) or type(other)==type(1.0):
            answer=self.copy()
            answer.coefficients[tuple(0 for _ in range(self.dimensions))]+=other
            return answer
        
        self_coefficients=self.coefficients.copy()
        other_coefficients=other.coefficients.copy()
        self_syms=self.syms.copy()
        other_syms=other.syms.copy()
        
        if set(self_syms)==set(other_syms):
            syms=self_syms
            ordercheck=all(self_syms[i]==other_syms[i] for i in range(self.dimensions))
            
            if not ordercheck:
                for i in range(other.dimensions):
                    if syms[i]!=other_syms[i]:
                       j = other_syms.index(syms[i])
                       other_syms[j], other_syms[i] = other_syms[i], other_syms[j]
                       other_coefficients=np.swapaxes(other_coefficients, j, i)
            
            if self.degree==other.degree:
                coefficients=self.coefficients+other.coefficients
            
            else: 
                degree=max(self.degree,other.degree)
                coefficients=np.zeros(shape=tuple(degree+1 for _ in range(self.dimensions)))
                coefficients[tuple(slice(0,self.degree+1) for _ in self_syms)]+=self_coefficients
                coefficients[tuple(slice(0,other.degree+1) for _ in other_syms)]+=other_coefficients
                
        else:
            syms=self_syms+[x for x in other_syms if x not in self_syms]
            dimensions=len(syms)    
            degree=max(self.degree,other.degree)
            
            chk_syms=[x for x in syms if x in other_syms]
            ordercheck=all(chk_syms[i]==other_syms[i] for i in range(other.dimensions))
            if not ordercheck:
                for i in range(other.dimensions):
                    if chk_syms[i]!=other_syms[i]:
                       j = other_syms.index(chk_syms[i])
                       other_syms[j], other_syms[i] = other_syms[i], other_syms[j]
                       other_coefficients=np.swapaxes(other_coefficients, j, i)
            
            a=np.zeros(shape=tuple(degree+1 for _ in range(dimensions))) ;      b=a.copy()
 
            a_index = tuple(slice(0, self.degree+1) if syms[x] in self_syms else 0 for x in range(dimensions))
            b_index = tuple(slice(0, other.degree+1) if syms[x] in other_syms else 0 for x in range(dimensions))
            
            a[a_index]=self_coefficients
            b[b_index]=other_coefficients
            coefficients=a+b
            
        return Equation(syms=syms,coefficients=coefficients.tolist(),name=f"{self.name}+{other.name}")
 
    def __radd__(self,other):  return self+other
    
    def __sub__(self,other):
        if type(other)==type(1) or type(other)==type(1.0):
            answer=self.copy()
            answer.coefficients[tuple(0 for _ in range(self.dimensions))]-=other
            return answer
        
        self_coefficients=self.coefficients.copy()
        other_coefficients=other.coefficients.copy()
        self_syms=self.syms.copy()
        other_syms=other.syms.copy()
        
        if set(self_syms)==set(other_syms):
            syms=self_syms
            ordercheck=all(self_syms[i]==other_syms[i] for i in range(self.dimensions))
            
            if not ordercheck:
                for i in range(other.dimensions):
                    if syms[i]!=other_syms[i]:
                       j = other_syms.index(syms[i])
                       other_syms[j], other_syms[i] = other_syms[i], other_syms[j]
                       other_coefficients=np.swapaxes(other_coefficients, j, i)
            
            if self.degree==other.degree:
                coefficients=self.coefficients+other.coefficients
            
            else: 
                degree=max(self.degree,other.degree)
                coefficients=np.zeros(shape=tuple(degree+1 for _ in range(self.dimensions)))
                coefficients[tuple(slice(0,self.degree+1) for _ in self_syms)]+=self_coefficients
                coefficients[tuple(slice(0,other.degree+1) for _ in other_syms)]+=other_coefficients
                
        else:
            syms=self_syms+[x for x in other_syms if x not in self_syms]
            dimensions=len(syms)    
            degree=max(self.degree,other.degree)
            
            chk_syms=[x for x in syms if x in other_syms]
            ordercheck=all(chk_syms[i]==other_syms[i] for i in range(other.dimensions))
            if not ordercheck:
                for i in range(other.dimensions):
                    if chk_syms[i]!=other_syms[i]:
                       j = other_syms.index(chk_syms[i])
                       other_syms[j], other_syms[i] = other_syms[i], other_syms[j]
                       other_coefficients=np.swapaxes(other_coefficients, j, i)
            
            a=np.zeros(shape=tuple(degree+1 for _ in range(dimensions))) ;      b=a.copy()
 
            a_index = tuple(slice(0, self.degree+1) if syms[x] in self_syms else 0 for x in range(dimensions))
            b_index = tuple(slice(0, other.degree+1) if syms[x] in other_syms else 0 for x in range(dimensions))
            
            a[a_index]=self_coefficients
            b[b_index]=other_coefficients
            coefficients=a-b
            
        return Equation(syms=syms,coefficients=coefficients.tolist(),name=f"{self.name}-{other.name}")    
    
    def __rsub__(self,other):  return self-other
          
    def __mul__(self,other):
        if type(other)==type(1) or type(other)==type(1.0):
            answer=self.copy()
            answer.coefficients=answer.coefficients*other
            return answer
        
        self_coefficients=self.coefficients.copy()
        other_coefficients=other.coefficients.copy()
        self_syms=self.syms.copy()
        other_syms=other.syms.copy()
        
        if set(self_syms)==set(other_syms):syms=self_syms
        else:  syms=self_syms+[x for x in other_syms if x not in self_syms]
                    
        dimensions=len(syms)
        p=self.degree+other.degree+1
        order=[p for _ in range(dimensions)]
        
        matrix=np.zeros(order)
        answer=Equation(coefficients=matrix.tolist(),syms=syms)
        
        chk_syms=[x for x in syms if x in other_syms]
        ordercheck=all(chk_syms[i]==other_syms[i] for i in range(other.dimensions))
        if not ordercheck:
            for i in range(other.dimensions):
                if chk_syms[i]!=other_syms[i]:
                    j = other_syms.index(chk_syms[i])
                    other_syms[j], other_syms[i] = other_syms[i], other_syms[j]
                    other_coefficients=np.swapaxes(other_coefficients, j, i)
        
        for s_index in np.ndindex(self_coefficients.shape):
            for o_index in np.ndindex(other_coefficients.shape):
                if sum(o_index)<=other.degree and sum(s_index)<=self.degree:
                    a=self_coefficients[s_index]  ;   b=other_coefficients[o_index]
                    
                    dest=[0 for _ in range(len(syms))]
                    i=0; j=0
                    for x in range(len(syms)):
                        if syms[x] in self_syms: s_dest=s_index[i]; i+=1
                        else: s_dest=0
                        
                        if syms[x] in other_syms: o_dest=o_index[j]; j+=1
                        else: o_dest=0
                        dest[x]=s_dest+o_dest
                    
                    dest=tuple(dest)
                    answer.coefficients[dest]=answer.coefficients[dest]+a*b
 
        return answer

    def __rmul__(self,other):  return self*other
    
    def __truediv__(self,other):
        if type(other)==type(1) or type(other)==type(1.0):
            answer=self.copy()
            answer.coefficients=answer.coefficients/other
            return answer
        else: raise TypeError("Divisor must be a number. Equation division is not yet supported")

    def __rtruediv__(self,other):
        raise TypeError("Cannot divide by an equation")
        
    def __pow__(self,power:int):
        if type(power)==type(1):
            answer=self.copy()
            for _ in range(power-1):
                answer=answer*self
            return answer
        else: raise TypeError("Exponent must be an integer") 
    
    def __neg__(self):
        answer=self.copy()
        answer.coefficients*=(-1)
        return answer
     
    def __str__(self) -> str:
        sp=self.__class__.sp
        string=""
        
        indices=list(x for x in np.ndindex(self.coefficients.shape))
        indices.reverse()
        for index in indices:
            if sum(index)<=self.degree:
                coeffval=self.coefficients[index]
                
                if coeffval!=0:
                    if coeffval<0:
                        string += " - "
                    elif coeffval>0:
                        string += " + "
                    if coeffval not in [-1,1]:
                        coeff=f"{abs(coeffval):.3f}".split(".")
                        coeff[0].lstrip("0")
                        coeff[1].rstrip("0")
                        if int(coeff[1])==0: string += coeff[0]
                        else: string += ".".join(coeff)
                        if sum(index)>0:
                            string+="·"

                    
                    for x in range(self.dimensions): 
                        if index[x]==1:
                            string+= f"{self.syms[x]}"
                            
                        elif index[x]>1:
                            string+= f"{self.syms[x]}{sp(index[x])}"
        
        symstr=''
        for x in self.syms: symstr+=","+x
        
        return f"{self.name}({symstr[1:]}) = {string[2:]}"
    
    def __repr__(self) -> str:
        return self.__str__()
    
    def __eq__(self, other) -> bool:
        
        if self.dimensions==other.dimensions and self.degree==other.degree and set(self.syms)==set(other.syms):
            self_coefficients=self.coefficients.copy()
            other_coefficients=other.coefficients.copy()
            self_syms=self.syms.copy()
            other_syms=other.syms.copy()
            
            ordercheck=all(self_syms[i]==other_syms[i] for i in range(self.dimensions))
                
            if not ordercheck:
                for i in range(other.dimensions):
                    if self_syms[i]!=other_syms[i]:
                        j = other_syms.index(self_syms[i])
                        other_syms[j], other_syms[i] = other_syms[i], other_syms[j]
                        other_coefficients=np.swapaxes(other_coefficients, j, i)
            
            return all(self_coefficients[index]==other_coefficients[index] for index in np.ndindex(self.coefficients.shape))
        else: return False
    
    @classmethod
    def sp(cls,ep):
        dict={"0":"⁰","1":"¹","2":"²","3":"³","4":"⁴","5":"⁵","6":"⁶","7":"⁷","8":"⁸","9":"⁹"}
        return "".join([dict[i] for i in str(int(ep))])
    