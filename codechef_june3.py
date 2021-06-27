def power(x, y, p) :
    res = 1     
    x = x % p
     
    if (x == 0) :
        return 0
 
    while (y > 0) :
       
        if ((y & 1) == 1) :
            res = (res * x) % p
 
       
        y = y >> 1    
        x = (x * x) % p
         
    return res
    
    
t=int(input())
for i in range(t):
    n,m=list(map(int,input().split(" ")))
    
    j=pow(10,9)+7
    
    ans=power(2,n,j)-1
    ans=power(ans,m,j)
    ans=ans%j
    print(int(ans))