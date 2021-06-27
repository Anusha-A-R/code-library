# cook your dish here
t=int(input())
for j in range(t):
    n,sar,anu=list(map(int,input().split(" ")))
    s=0
    a=0
    
    for j in range(n):
        str=input()
        e="E"
        q="Q"
        o="O"
        u="U"
        i="I"
        n="N"
        x="X"

        if str[0]==e:
            s+=1
        elif str[0]==q:
            s+=1
        elif str[0]==u:
            s+=1
        elif str[0]==i:
            s+=1
        elif str[0]==n:
            s+=1
        elif str[0]==o:
            s+=1
        elif str[0]==x:
            s+=1
        else:
            a+=1
    sart=sar*s
    anur=anu*a
    if sart>anur:
        print("SARTHAK")
    elif anur>sart:
        print("ANURADHA")
    else:
        print("DRAW")
    
        
    