from classMatrix import Matrix

class Equation(Matrix):
    def __init__(self, dim=None, deg=None, coefficients="Manual", syms=None, name='f',dict=None):
        
        if dict!=None:
            self.coefficients=dict["coefficients"]
            self.syms=dict["syms"]
            self.dimensions=dict["dimensions"]
            self.degree=dict["degree"]
        
        elif coefficients!="Manual":
           # self.__class__.coeffCheck(coefficients)
            
            self.coefficients = list(coefficients)
            self.dimensions = Matrix.getdimensions(self.coefficients)
            self.degree = len(self.coefficients)-1
            self.syms = self.symSetUp(syms)
        
        elif dim!=None and deg!=None:
            self.degree = abs(int(deg))
            self.dimensions = abs(int(dim))
            self.syms = self.symSetUp(syms)
            self.coefficients = self.coeffSetUp(self.dimensions,self.degree)        
        
        else: raise AttributeError("Insuffcient Attribute provided for Equation Construction")   
        self.name=name
        self.matrix = self.coefficients
        self.order = [self.degree for _ in range(self.dimensions)]
    
    def standardize(self):
        degcheck=[]
        for i in range(self.degree):
            index=[i for _ in range(self.dimensions)]
            degcheck+= (self.get(index)!=0)
        
        
    def export(self):
        dict={}
        dict["coefficients"]=self.coefficients
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
                
    
    def coeffSetUp(self,dim=1,degree=0, index=[]):
        sp=self.__class__.sp
        if dim>0:
            coefflist=[0 for _ in range(degree+1)]
            for i in range(degree,-1,-1):
                coefflist[i]=self.coeffSetUp(dim-1,degree, index+[i])
            return coefflist
        
        elif dim==0 and sum(index)<=self.degree:
            string=""
            for x in range(self.dimensions): string+= f"{self.syms[x]}{sp(index[x])}"
            val = float(input(string + " "))
            if sum(index)>0:print(" + ", end="")
            return val
        
        elif dim==0 and sum(index)>self.degree:
            return 0
    

    def f(self, fval):
        return self.f_support(fval=fval)
    
    def f_support(self,dim=0,index=[],fval=[0],init=1):
        if init==1: dim=self.dimensions
        
        if dim>0:
            val=0
            for i in range(self.degree+1):
                val+= self.f_support(dim-1,index+[i],fval,0)
            return val
        else:
            val=1
            for i in range(self.dimensions):
                val*= fval[i]**index[i]
            val*=self.get(index)
            return val
                
    def __add__(self,other):
        if set(self.syms)==set(other.syms): syms=self.syms
        else:syms=self.syms+[x for x in other.syms if x not in self.syms]
        
        dimensions=len(syms)    
        
        if self.degree>=other.degree:  degree=self.degree 
        else:                          degree=other.degree
        
        matrix = self.add_support(other,dimensions,degree,syms=syms)
        return Equation(coefficients=matrix,syms=syms)
        
    def add_support(self,other,dim,degree,index=[],syms=[]):    
                    
        if dim>0:
            list=[]
            for i in range(degree+1):
                list+=[self.add_support(other,dim-1,degree, index+[i],syms)]
            return list
        
        elif dim==0:
            non_s=[x for x in range(len(syms)) if syms[x] not in self.syms]
            non_o=[x for x in range(len(syms)) if syms[x] not in other.syms]
            s_dest=[index[x] for x in range(len(syms)) if syms[x] in self.syms]
            o_dest=[index[x] for x in range(len(syms)) if syms[x] in other.syms]
            
            a=0
            if all(index[i]==0 for i in non_s) and all(x<=self.degree for x in s_dest):
                a=self.get(s_dest)
            b=0
            if all(index[i]==0 for i in non_o) and all(x<=self.degree for x in o_dest):
                b=other.get(o_dest)
            
            return a+b

    
    def __mul__(self,other):
        if set(self.syms)==set(other.syms):syms=self.syms
        else:  syms=self.syms+[x for x in other.syms if x not in self.syms]
                    
        dimensions=len(syms)
        p=self.degree+other.degree+1
        order=[p for _ in range(dimensions)]
        
        matrix=Matrix.matrixSetUp(dimensions,order,all=0)
        answer=Equation(coefficients=matrix,syms=syms)
        
        self._mul_support(other,answer,self.dimensions,syms=syms)
        
        return answer
    
    def _mul_support(self,other,answer,dim,s_index=[],o_index=[],syms=[],mode=1):
        if mode==1:
            if dim>0:
                for i in range(self.degree+1):
                    self._mul_support(other,answer,dim-1,s_index+[i],o_index,syms,1)
            
            elif dim==0 and sum(s_index)<=self.degree:
                self._mul_support(other,answer,other.dimensions,s_index,o_index,syms,2)
        
        elif mode==2:
            if dim>0:
                for i in range(other.degree+1):
                    self._mul_support(other,answer,dim-1,s_index,o_index+[i],syms,2)
            
            elif dim==0 and sum(o_index)<=other.degree:
                a=self.get(s_index)  ;   b=other.get(o_index)
                dest=[0 for _ in range(len(syms))]
                
                i=0; j=0
                for x in range(len(syms)):
                    if syms[x] in self.syms: s_dest=s_index[i]; i+=1
                    else: s_dest=0
                    
                    if syms[x] in other.syms: o_dest=o_index[j]; j+=1
                    else: o_dest=0
                    dest[x]=s_dest+o_dest
                
                # print(dest,"\n",s_index," ",o_index)
                val=answer.get(dest)+a*b
                answer.set(dest,val)
        
    def __str__(self):
        string=self._string_support()
        symstr=''
        for x in self.syms: symstr+=","+x
        
        return f"{self.name}({symstr[1:]}) = {string[2:]}"
    
    def _string_support(self,dim=0,degree=0,index=[],init=1):
        sp=self.__class__.sp
        if init==1:
            dim=self.dimensions
            degree=self.degree
            
        if dim>0:
            string=""
            for i in range(degree,-1,-1):
                string+=self._string_support(dim-1,degree, index+[i],0)
            return string
        
        elif dim==0 and sum(index)<=self.degree:
            string=""
            coeffval=self.get(index)
            
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
            
                for x in range(self.dimensions): 
                    if index[x]==1:
                        string+= f"{self.syms[x]}"
                        
                    elif index[x]>1:
                        string+= f"{self.syms[x]}{sp(index[x])}"
            return string
        
        elif dim==0 and sum(index)>self.degree:
            return ""
        
    
    @classmethod
    def sp(cls,ep):
        dict={"0":"⁰","1":"¹","2":"²","3":"³","4":"⁴","5":"⁵","6":"⁶","7":"⁷","8":"⁸","9":"⁹"}
        return "".join([dict[i] for i in str(int(ep))])
    