import sys

def max(a, b):
    return a if (a > b) else b

def cutRod(price, n):
    if(n <= 0):
        return 0
    max_val = -sys.maxsize-1
    
    for i in range(0, n):
        max_val = max(max_val, price[i] +
                      cutRod(price, n - i - 1))
    return max_val
 
n=int(input())
arr=list(map(int,input().split(" "))
   
size = n
print("Maximum Obtainable Value is", cutRod(arr, size))
 