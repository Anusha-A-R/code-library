# cook your dish here
t=int(input())
for i in range(t):
    n,x,k=list(map(int,input().split(" ")))
    if k==0:
        print("YES")
    elif k==n+1:
        print("YES")
    else:
        m=0
        for j in range(1,n+2):
            if x==(k*j):
                print("YES")
                m=1
                break
            elif x==(n+1-(k*j)):
                print("YES")
                m=1
                break
    if m==0:
        print("NO")
    