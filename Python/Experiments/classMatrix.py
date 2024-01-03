class Matrix:
    
    def __init__(self,order=[0],dimensions=None, all=None, matrix=None) -> None:
        """_summary_

        Args:
            order (list, optional): It is list of number of terms in each dimensions. For example a two dimensional 4x3 matrix would be of order [4,3]. Defaults to [0].
            dimensions (int, optional): Number of dimensions. Defaults to None.
            all (float, optional): Value all elements of created matrix will have, otherwise user will be promt for input. Defaults to None.
            matrix (list, optional): Predifened matrix list to be made into Matrix object. Defaults to None.

        Raises:
            AttributeError: If order and dimensions are both provided, but are incompatible.
        """
        
        if matrix==None:
            if dimensions==None: dimensions=len(order)
            elif len(order) == 1 and dimensions!=None: order = [order[0] for _ in range(dimensions)]
            elif len(order) == dimensions: pass
            else:
                raise AttributeError("Incompatibility between provided order array and dimension count")
            self.dimensions=abs(int(dimensions))
            self.order=list(order)
            self.matrix=self.__class__.matrixSetUp(self.dimensions,self.order, all)
        
        else:
            self.matrix=matrix
            self.dimensions = self.__class__.getdimensions(matrix)
            self.order = self.__class__.getorder(matrix)

    def get(self,index,matrix=None):
        if matrix==None: matrix=self.matrix
        
        if len(index)>1:
            return self.get(index[1:],matrix[index[0]])
        elif len(index)==1:
            return matrix[index[0]]
        """
        index is positions of element in matrix to be retrieved. Since matrix is a list of lists and so on, and level of nesting is equal to number of dimensions, index is a list of length equal to number of dimensions. For example, a 4x3 matrix has 2 dimensions and so index is a list of length 2. index[0] is the position of the list in matrix that contains the element to be retrieved. index[1] is the position of the element in the list at matrix[index[0]] that is to be retrieved.
        So we retrieve element based first value of index, and call function again with retrived element and index with retrived co-ordinated removed. This is until there is only level of nesting left, which is when len(index)==1. Then we return the element at index[0] of the list.
        """
    
    def set(self,index,value=None,matrix=None,init=1,dim=None):
        if matrix==None: matrix=self.matrix
        if init==1: dim=self.dimensions
        if dim>0:
            matrix[index[0]]= self.set(index[1:],value,matrix[index[0]],0,dim-1)
            if init==0: return matrix
        elif dim==0:
            return value
        """
        Same as get, but instead it sets the value instead of retrieving it.
        """
            
    @classmethod
    def matrixSetUp(cls, dime=0,order=[0], all=None, index=[]):
        if dime>0:
            list=[0 for _ in range(order[0])]
            for i in range(0,order[0]):
                list[i]=cls.matrixSetUp(dime-1,order[1:],all, index+[i])
            return list
        elif dime==0 and  all==None:
            return float(input(f"Element{index} : "))
        elif dime==0 and all!=None:
            return all
        """
            Same as set function, but instead of a single element, it goes through all indexes possible within given order of matrix
        """
    
    @classmethod
    def getorder(cls,matrix,order=[]):
        if type(matrix) == type([1,1]):
            order+=[len(matrix)]
            return cls.getorder(matrix[0],order)
        else:
            return order
        
    @classmethod
    def getdimensions(cls,matrix,dimensions=0):
        if type(matrix) == type([0,1]):
            dimensions+=1
            return cls.getdimensions(matrix[0],dimensions)
        else:
            return dimensions
        
    def __str__(self) -> str:
        str=""
        for x in self.matrix:
            str+= f"{x}\n"
        return str
    