import math
n,a,b,k=list(map(int,input().split()))
ar=list(map(int,input().split()))
val=[]
for i in ar:
    x=i%(a+b)
    if(x==0):x=a+b
    val.append(math.ceil((x-a)/a))
val.sort()
x=0
ctr=0
for i in val:
   x+=i
   if(x>k): break
   else: ctr+=1
print(ctr)