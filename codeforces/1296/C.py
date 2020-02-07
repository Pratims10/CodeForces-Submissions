t=int(input())
while t>0:
    t-=1
    n=int(input())
    s=input()
    x,y=0,0
    mp={}
    ctr=1
    mp['0,0']=[0]
    for i in s:
        if i=='L':
            x+=1
        elif i=='R':
            x-=1
        elif i=='U':
            y+=1
        else:
            y-=1
        if mp.get(str(x)+','+str(y)):
            mp[str(x)+','+str(y)].append(ctr)
        else:
            mp[str(x)+','+str(y)]=[ctr]
        ctr+=1
    mn=2000000000
    p,q=-1,-1
#    print(mp)
    for i,j in mp.items():
        for k in range(0,len(j)-1):
            x=j[k+1]-(j[k]+1)
            if mn>x:
                mn=x
                p=j[k]+1
                q=j[k+1]
    if(mn==2000000000):print(-1)
    else:
        print(p,q)
