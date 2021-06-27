# cook your dish here
t=int(input())
for i in range(t):
    na=input().split()
    n=int(na[0])
    k=int(na[1])
    s=input()
    an=[0] *n
    max=0
    for j in range(n):
        if s[j]=='*':
            if j==0:
                an[j]=1
            else:
                an[j]=an[j-1]+1
        if max<an[j]:
            max=an[j]
    if max>=k:
        print("YES")
    else:
        print("NO")