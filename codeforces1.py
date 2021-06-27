t=int(input())
for j in range(t):
    n,max=list(map(int,input().split(" ")))
    arr=list(map(int,input().split(" ")))
    arr.sort(reverse=true)
    m=arr[0]
    ans=1
    for i in range(1,n):
        if m==max:
            ans=0
            break
        else:
            m=m+arr[i]
    if ans==0:
        print("NO")
    else:
        print("YES")
        print(arr)


