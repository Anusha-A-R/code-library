t=int(input())
for j in range(t):
    n=int(input())
    st=input()
    stra=[]
    for i in range(n):
        stra.append(st[i])

    a=[]
    max=int(stra[0])
    a.append(stra[0])
    for i in range(1,n):
        a.append((int(stra[i])+max)/(i+1))
        if max<max+int(stra[i]):
            max+=int(stra[i])
    ans=0
    for i in range(n):
        if float(a[i])>=0.5:
            ans=1
    if ans==1:
        print("YES")
    else:
        print("NO")