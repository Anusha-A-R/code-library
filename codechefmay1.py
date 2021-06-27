# cook your dish here
t=int(input())
for i in range(t):
    x,a,b=list(map(int,input().split(" ")))
    ans=a+(100-x)*b
    print(ans*10)