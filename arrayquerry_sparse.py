import math
def arrayQuerry(arr,n):
    o=(math.ceil(math.log(n,2)))+1
    print(o)
    sparse = [[0 for i in range(o)]
                 for j in range(n)]
    print(sparse)
    k=0
    for i in range(n):
        sparse[i][k]=i
    print(sparse)
    j=1
    while (pow(2,j))<=n:
        i = 0
        while (i + (pow(2,j)) - 1) < n: 
            if arr[sparse[i][j-1]]<arr[sparse[i+pow(2,j-1)][j-1]]:
                sparse[i][j] =sparse[i][j-1]
            else:
                sparse[i][j]=sparse[i+pow(2,j-1)][j-1]
            i+=1
        j+=1
    
    return sparse

def querryi(arr,sparse,low,high):
    l=high-low+1
    k=math.ceil(math.log(l))
    return min(arr[sparse[low][k]],arr[sparse[low+l-pow(2,k)][k]])


#min
n=int(input())
arr=list(map(int,input().split(" ")))
sparse=arrayQuerry(arr, n)
print(sparse)
querry=int(input())
for i in range(querry):
    low,high=list(map(int,input().split(" ")))
    ans=querryi(arr,sparse,low,high)
    print(ans)
