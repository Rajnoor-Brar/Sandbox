class Polynomial():
    def __init__(self, degree=False, coefficients="Manual", sym="x"):
        self.sym=sym
        if coefficients=="Manual":
            if degree==False: degree = input("Enter the degree of the polynomial: ")
            self.degree = abs(int(degree))
            self.coefficients = [0 for _ in range(self.degree+1)]
            self.coeffSetUp()
        elif coefficients!="Manual":
            self.degree = len(coefficients)-1
            self.coefficients = list(coefficients)
            self.standardize()
        else :
            print("Number of co-efficients do not corespond to provided degree")
            self.__del__()
        
        
    def coeffSetUp(self):
        sp=self.__class__.sp
        print(f"f({self.sym}) =  ", end="")
        for i in range(self.degree,-1,-1):
            if i == 0:
                self.coefficients[i] = float(input(""))
            elif i == 1:
                self.coefficients[i] = float(input(f"{self.sym} ⋅"))
                print("\b + ", end="")
            elif i>1:
                self.coefficients[i] = float(input(f"{self.sym}{sp(i)} ⋅ "))
                print("\b + ", end="")
        
        self.standardize()
    
    def standardize(self):
        if all(i==0 for i in self.coefficients):
            self.degree = 0
            self.coefficients = [0]
            
        elif self.coefficients[-1]==0:
            self.coefficients = self.coefficients[:-1]
            self.degree -= 1
            self.standardize()
    
    def f(self, fval) -> float:
        return sum([self.coefficients[i]*(fval**i) for i in range(self.degree+1)])
    
    def __add__(left,right) -> "Polynomial":
        a = left.coefficients.copy()
        b = right.coefficients.copy()
        m = left.degree
        n = right.degree
        if m>=n :
            b+=[0 for _ in range(n,m)]
            p=m
            c=[a[i]+b[i] for i in range(p+1)]

        elif n>m :
            a+=[0 for _ in range(m,n)]
            p=n
            c=[a[i]+b[i] for i in range(p+1)]
        
        return left.__class__(p,c)
    
    def __mul__(left,right) -> "Polynomial":
        a = left.coefficients.copy()
        b = right.coefficients.copy()
        m = left.degree
        n = right.degree
        
        p=m+n
        c=[0 for _ in range(p+1)]
        for i in range(m+1):
            for j in range(n+1):
                c[i+j]+=a[i]*b[j]
                
        return left.__class__(p,c)
        
    def __str__(self) -> str:
        string=""
        sp=self.__class__.sp
        for i in range(self.degree,-1,-1):
            if self.coefficients[i]!=0:
                if self.coefficients[i] not in [-1,1]:
                    coeff=f"{self.coefficients[i]:.3f}".split(".")
                    coeff[0].lstrip("0")
                    coeff[1].rstrip("0")
                    if int(coeff[1])==0: string += coeff[0]
                    else: string += ".".join(coeff)
                elif self.coefficients[i]==(-1):
                    string += "-"
                    
                if i==1:
                    string +=self.sym
                elif i>1:
                    string += self.sym+sp(i)
                    
                if i!=0 and self.coefficients[i-1]>0:
                    string += " + "
                elif i!=0 and self.coefficients[i-1]<0:
                    string += ""
                    
        string.replace("-", " - ")
        string=f"f({self.sym}) = "+string           
        # string = " + ".join([str(self.coefficients[i])+"{self.sym}"+sp(i) for i in range(self.degree,-1,-1) if self.coefficients[i]!=0])+" = 0"
        return string
    
    def __repr__(self) -> str:
        return f'Polynomial({self.degree}, {self.coefficients}, "{self.sym}")'
    
    @classmethod
    def sp(cls,ep):
        dict={"0":"⁰","1":"¹","2":"²","3":"³","4":"⁴","5":"⁵","6":"⁶","7":"⁷","8":"⁸","9":"⁹"}
        return "".join([dict[i] for i in str(int(ep))])
    