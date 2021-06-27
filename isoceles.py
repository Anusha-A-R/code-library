t=int(input())
for i in range(t):
    n=int(input())
    if n%2!=0:
        print("NO")
    else:
        while n>2:
            n=n/2
        if n==2:
            print("YES")
        else:
            print("NO")