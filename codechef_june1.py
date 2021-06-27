t=int(input())
for i in range(t):
    a,b,A,B=list(map(int,input().split(" ")))
    ans=(A/a)+(B/b)
    print(int(ans))