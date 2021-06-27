import math
def setBits(n):
    count = 0
 
    while (n > 0):
        n = n & (n - 1)
        count += 1
         
    return count

def findNthDog(N):
    x = setBits(N ^ (N - 1))
    return x

def findLukiestDog(n):
    num=math.floor(math.log2(n))
    return pow(2,num)

n,m=list(map(int,input().split(" ")))
ans1=findNthDog(m)
ans2=findLukiestDog(n)
print(str(ans1)+" "+str(ans2))

