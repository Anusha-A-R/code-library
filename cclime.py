# cook your dish here
t=int(input())
for j in range(t):
    n,wt,w=list(map(int,input().split(" ")))
    weight=list(map(int,input().split(" ")))
    ans=0
    lp=[]
    m=0
    counts = dict()
    for i in weight:
        counts[i] = counts.get(i, 0) + 1
        m+=1
        
    if weight.count(1)==n:
        if n%2==0:
           ans=ans+n
    else:    
        for i in weight:
            if counts[i]%2==0:
                ans+=counts[i]*i
            
    if w>=wt:
        print("YES")
    elif (w+ans)>=wt:
        print("YES")
    else:
        print("NO")
        
            