# cook your dish here
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
    n=int(input())
    m=pow(10,9)+7
    if n==0:
        print("1")
    else:
        n=power(2,n-1,m)
       
        print(int(n))