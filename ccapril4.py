# cook your dish here
t=int(input())
for i in range(t):
    ans=0
    lookup=[0,20,36,51,60,76,88,99,104]
    n=int(input())
    if n>8:
        div=int(n/4)
        ans=int((div-1)*44)
        rem=n%4
        ans=ans+lookup[rem+4]
    else:
        ans=lookup[n]
    print(ans)
    
    
