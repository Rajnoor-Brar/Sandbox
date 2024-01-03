def _mul_support_builder(self,other,dim,degree,index=[],syms=[]):

        if dim>0:
            coefflist=[0 for _ in range(degree+1)]
            for i in range(degree+1):
                coefflist[i]=self._mul_support_builder(other, dim-1,degree, index+[i],syms)
            return coefflist
        
        elif dim==0 and sum(index)<=degree:
            val = self._mul_support_val(other,self.dimensions,index,[],[],syms,1)           
            return val
        
        elif dim==0 and sum(index)>degree:
            return 0
                
def _mul_support_val(self,other,dim=0,superindex=0,s_index=[],o_index=[],syms=[],mode=1):
 
        if mode==1:
            if dim>0:
                value=0
                for i in range(self.degree+1):
                    value+=self._mulsupport_val(other,dim-1,superindex, s_index+[i],o_index,syms,1)
                return value
            
            elif dim==0:
                return self._mul_support_val(other,other.dimensions,superindex, s_index,o_index,syms,2)
        
        elif mode==2:
            if dim>0:
                value=0
                for i in range(other.degree+1):
                    value+=self._mulsupport_val(other,dim-1,superindex,s_index, o_index+[i],syms,2)
                return value
            
            elif dim==0:
                if (sum(s_index)+sum(o_index))==sum(superindex):
                    non_s=[x for x in range(len(syms)) if syms[x] not in self.syms]
                    non_o=[x for x in range(len(syms)) if syms[x] not in other.syms]
                    s_dest=[superindex[x] for x in range(len(syms)) if syms[x] in self.syms]
                    o_dest=[superindex[x] for x in range(len(syms)) if syms[x] in other.syms]
                    
                    a=0
                    if all(index[i]==0 for i in non_s) and all(x<=self.degree for x in s_dest):
                        a=self.getelement(s_dest)
                    b=0
                    if all(index[i]==0 for i in non_o) and all(x<=self.degree for x in o_dest):
                        b=other.getelement(o_dest)
                    
                    for x in non_s: x_s[x]=0
                    
                    c_index = [o_index[i]+s_index[i] for i in range(syms)]
                    if c_index==superindex:
                        a=0
                        b=0
                        if all(superindex[i]==0 for i in range(len(syms)) if s_index[syms[i]]==None):
                            a=self.getelement([superindex[s_index[x]] for x in s_syms])
                    
                        if all(superindex[i]==0 for i in range(len(syms)) if o_index[syms[i]]==None):
                            b=other.getelement([superindex[o_index[x]] for x in o_syms])
                        
                        val=a*b
                        return val

            
            
                    return 1
                else: return 0
                
                def standardize(self):
        indices = np.ndindex(tuple(self.degree+1 for _ in range(self.dimensions)))
        
        
def standardize(self):
        degchk=[self.coefficients[index]==0 for index in indices if sum(index)==self.degree]
        if all(degchk):
            self.degree-=1
            self.coefficients=self.coefficients[tuple(self.degree+1 for _ in range(self.dimensions))]
            self.standardize()
        
        for x in range(self.dimensions):
            print (indices)
            for index in indices:
                print(index)
                    
            if all(self.coefficients[index]==0 for index in indices if index[x]!=0):
                # print(self.coefficients[index]==0, x, index)
                self.syms.pop(x)
                self.dimensions-=1
                self.coefficients=self.coefficients[tuple(slice(0,self.degree+1) if i!=x else 0 for i  in range(self.dimensions))]
                self.standardize()
                break;
         