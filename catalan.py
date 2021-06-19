def catalan(n):
    a=[0]*(n+1)
    a[0]=1
    a[1]=1
    for i in range(2,n+1):
        a[i]=0
        for j in range(i):
            a[i]+=a[j]*a[i-j-1]
    return a


t=int(input())
for i in range(t):
    n=int(input())
    print(catalan(n))
