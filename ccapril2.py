# cook your dish here
n=int(input());
for i in range(n):
    a=list(map(float,input().split(' ')))
    prod=1
    for i in a:
        prod=prod*i
    prod=100/prod
    prod=round(prod,2)
    if prod<9.58:
        print("YES")
    else:
        print("NO")
    # cook your dish here
