from classEquation import Equation

n=int(input("How many variables? "))

equations=[]
matrix=[]

for i in range(n):
    equations+= [Equation(n,1,name=f"f{i+1}")]
    print(equations[i])
    row=[]
    for j in range(n-1,-1,-1):
        index=[0 for _ in range(n)]
        index[j]=1
        row+=[equations[i].get(index)]
    row+=[equations[i].get([0 for _ in range(n)])]
    matrix+=[row]
 
for i in range(n-1):
    if matrix[i][i]==0: print("Mathematical Error!!"); exit()
    
    for j in range(i+1,n):
        for k in range(n+1):
            matrix[j][k]-= matrix[j][i]/matrix[i][i]*matrix[i][k]
        
var = [0 for _ in range(n)]
var[n-1]=matrix[n-1][n]/matrix[n-1][n-1]

for i in range(n-2,-1,-1):
    var[i]=matrix[i][n]
    for j in range(i+1,n):
        var[i]-= matrix[i][j]*var[j]
    var[i]/=matrix[i][i]

print(var)
    