# cook your dish here
t=int(input())
for i in range(t):
    n,wt,w=list(map(int,input().split(" ")))
    weight=list(map(int,input().split(" ")))
    ans=0
    lp=[]
    for j in weight:
        if j not in lp:
            if weight.count(j)%2==0:
                ans+=weight.count(j)*j
                
                lp.append(j)
    if w>=wt:
        print("YES")
    elif (w+ans)>=wt:
        print("YES")
    else:
        print("NO")
        
            