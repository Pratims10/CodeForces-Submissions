t=int(input())
while t>0 :
    n=int(input())
    ar=list(map(int,input().split()))
    o=0
    e=0
    for i in ar:
        if(i%2):
            o+=1
        else:
            e+=1
#    print(o,e)
    if(o>0 and e>0):
        print("YES")
    else:
        if(o==0):
            print("NO")
        else:
            if(n%2):
                print("YES")
            else:
                print("NO")
    t-=1