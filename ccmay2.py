# cook your dish here
# cook your dish here
t=int(input())
for i in range(t):
    n,x,k=list(map(int,input().split(" ")))
    if x%k==0:
        print("YES")
    elif (n+1-x)%k==0:
        print("YES")
    else:
        print("NO")