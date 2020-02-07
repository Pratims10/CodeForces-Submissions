t=int(input())
while t>0:
    t-=1
    n=int(input())
    ans=0
    while(True):
        r=n-n%10
        ans+=r
        n=n-r+r//10
        if(n<10):
            ans+=n
            break
    print(ans)