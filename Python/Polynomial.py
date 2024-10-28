class Polynomial():
    def __init__(self, deg:int=None, coefficients:list="Manual", syms:str="x", name:str='f'):
        
        if type(coefficients)==type([1,1]):
            self.coefficients = coefficients
            self.degree = len(coefficients)-1
        
        elif deg!=None:
            self.degree = abs(int(deg))
            self.coefficients = [0 for _ in range(self.degree+1)]
            self.coeffSetUp()        
        
        else: raise AttributeError("Insuffcient Attributes provided for Polynomial Construction")   
        self.sym = syms
        self.name=name
    
    def export(self) -> dict:
        dict={}
        dict["coefficients"]=self.coefficients
        dict["syms"]=self.sym
        dict["degree"]=self.degree
        dict["name"]=self.name
        return dict
                
    def coeffSetUp(self):
        sp=self.__class__.sp
        for index in range(self.degree+1):
            self.coefficients[index] = float(input(f"{self.sym}{sp(index)}· "))
            if index>0:print(" + ", end="")

    def copy(self) -> "Polynomial":
        return Polynomial(coefficients=self.coefficients,syms=self.sym,name=self.name)

    def __call__(self, *args: float) -> float:
        return self.f(args[0])

    def f(self, fval:float) -> float:
        val=0
        for index in range(self.degree+1):val+=(fval**index)*self.coefficients[index]
        return val
                 
    def __add__(self,other:"Polynomial") -> "Polynomial":
        if type(other)==type(1) or type(other)==type(1.0):
            answer=self.copy()
            answer.coefficients[0]+=other
            return answer
        
        if self.sym==other.sym:
            if self.degree==other.degree:
                coefficients=[0 for _ in range(self.degree+1)]
                for i in range(self.degree+1):coefficients[i]+=self.coefficients[i]+other.coefficients[i]
            
            else: 
                degree=max(self.degree,other.degree)
                coefficients=[0 for _ in range(degree+1)]
                for i in range(self.degree+1):coefficients[i]+=self.coefficients[i]
                for i in range(other.degree+1):coefficients[i]+=other.coefficients[i]            
            
        return Polynomial(syms=self.sym,coefficients=coefficients,name=f"{self.name}+{other.name}")
 
    def __radd__(self,other:"Polynomial") -> "Polynomial":  return self+other
    
    def __sub__(self,other:"Polynomial") -> "Polynomial":
        if type(other)==type(1) or type(other)==type(1.0):
            answer=self.copy()
            answer.coefficients[0]-=other
            return answer
        
        if self.sym==other.sym:
            if self.degree==other.degree:
                coefficients=self.coefficients+other.coefficients
            
            else: 
                degree=max(self.degree,other.degree)
                coefficients=[0 for _ in range(degree+1)]
                for i in range(self.degree):coefficients[i]+=self.coefficients[i]
                for i in range(other.degree):coefficients[i]-=other.coefficients[i]           
            
        return Polynomial(syms=self.sym,coefficients=coefficients,name=f"{self.name}-{other.name}")
     
    def __rsub__(self,other:"Polynomial") -> "Polynomial":  return -1*(self-other)
          
    def __mul__(self,other:"Polynomial") -> "Polynomial":
        if type(other)==type(1) or type(other)==type(1.0):
            answer=self.copy()
            answer.coefficients=[x*other for x in answer.coefficients]
            return answer
        
        if self.sym==other.sym:
            degree=self.degree+other.degree
            coefficients=[0 for _ in range(degree+1)]
            for a in range(self.degree+1):
                for b in range(other.degree+1):
                    coefficients[a+b]+=self.coefficients[a]*coefficients[b]
        
            return Polynomial(deg=degree,coefficients=coefficients)

    def __rmul__(self,other:"Polynomial") -> "Polynomial":  return self*other
    
    def __truediv__(self,other:"Polynomial") -> "Polynomial":
        if type(other)==type(1) or type(other)==type(1.0):
            answer=self.copy()
            answer.coefficients=answer.coefficients/other
            return answer
        else: raise TypeError("Divisor must be a number. Polynomial division is not yet supported")

    def __rtruediv__(self,other) -> None:
        raise TypeError("Cannot divide by an Polynomial")
        
    def __pow__(self,power:int) -> "Polynomial":
        if type(power)==type(1):
            answer=self.copy()
            for _ in range(power-1):
                answer=answer*self
            return answer
        else: raise TypeError("Exponent must be an integer") 
    
    def __neg__(self) -> "Polynomial":
        answer=self.copy()
        answer.coefficients*=(-1)
        return answer
     
    def __str__(self) -> str:
        sp=self.__class__.sp
        string=""
        
        for index in range(self.degree,-1,-1):
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
                    if index>0:
                        string+="·"
                elif index==0:string+="1"

                if index==1:
                    string+= f"{self.sym}"
                    
                elif index>1:
                    string+= f"{self.sym}{sp(index)}"
           
        return f"{self.name}({self.sym}) = {string[2:]}"
    
    def __repr__(self) -> str:
        return self.__str__()
    
    def __eq__(self, other:"Polynomial") -> bool:
        
        if self.degree==other.degree and self.sym==other.sym:               
            return all(self.coefficients[index]==other.coefficients[index] for index in range(self.degree+1))
        else: return False
    
    def integrate(self) -> "Polynomial":
        coeffs=self.coefficients.copy()
        coeffs.insert(0,0)
        for i in range(1,len(coeffs)):coeffs[i]=coeffs[i]/i
        return Polynomial(coefficients=coeffs,syms=self.sym,name=self.name)
    
    @classmethod
    def sp(cls,ep:str) -> str:
        # To get superscript characters when typing Polynomial
        dict={"0":"⁰","1":"¹","2":"²","3":"³","4":"⁴","5":"⁵","6":"⁶","7":"⁷","8":"⁸","9":"⁹"}
        return "".join([dict[i] for i in str(int(ep))])
    
    @classmethod
    def rootCoeffs(cls, roots:list) -> list:
        # To expand factorised Polynomial into coefficients: (x-1)(x-2) => x^2 - 3x + 2
        n=len(roots)
        coeffs=[0 for _ in range(n+1)]
        
        def rootMult(k,j,level):
            if (level==k):return 1
            val=0
            for i in range(j,n): val+= roots[i]*rootMult(k,i+1,level+1)
            return val

        for k in range(n+1): coeffs[n-k]=(rootMult(k,0,0)*pow(-1,k))
        return coeffs