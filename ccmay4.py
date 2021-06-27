# cook your dish here
t=int(input())
for _ in range(t):
    x=0
    o=0
    e=0
    a=[]
    for _ in range(3):
        l=list(input())
        x+=l.count('X')
        o+=l.count('O')
        e+=l.count('_')
        a.append(l)
    m=0
    n=0
    
    for i in range(3):
        if a[i][0]=="X" and a[i][1]=="X" and a[i][2]=="X":
            m=1
        elif a[i][0]=="O" and a[i][1]=="O" and a[i][2]=="O":
            n=1
        elif a[0][i]=="X" and a[1][i]=="X" and a[2][i]=="X":
            m=1
        elif a[0][i]=="O" and a[1][i]=="O" and a[2][i]=="O":
            n=1
    if a[0][0]=="X" and a[1][1]=="X" and a[2][2]=="X":
        m=1
    elif a[0][0]=="O" and a[1][1]=="O" and a[2][2]=="O":
        n=1
    elif a[0][2]=="X" and a[1][1]=="X" and a[2][0]=="X":
        m=1
    elif a[0][2]=="O" and a[1][1]=="O" and a[2][0]=="O":
        n=1
    if (m==1 and n==1) or (x-o<0) or (x-o>1):
        print("3")
    elif x==0 and o==0 and e==9:
        print("2")
    elif m==1 and n==0 and x>o:
        print("1")
    elif m==0 and n==1 and x==o:
        print("1")
    elif m==0 and n==0 and e==0:
        print("1")
    elif m==0 and n==0 and e>0:
        print("2")
    else:
        print("3")
        