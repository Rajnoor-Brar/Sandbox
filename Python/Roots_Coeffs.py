
a=[1,1,1,1,1,1,1]
n=len(a)
l=0
coeffs=[0 for _ in range(n+1)]

def rootMult(k,j,level):
    if (level==k):return 1
    val=0
    for i in range(j,n): val+= a[i]*rootMult(k,i+1,level+1)
    return val
    
for k in range(n+1): coeffs[k]=(rootMult(k,0,0)*pow(-1,k))