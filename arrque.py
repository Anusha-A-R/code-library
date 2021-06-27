def kadane(arr,n):
    max=0
    maxt=0
    start=0
    for i in range(n):
        maxt=maxt+arr[i]
        if maxt<0:
            maxt=0
            start=i+1
        if max<maxt:
            max=maxt
            end=i
            start_=start
    a=[max,start_,end]
    return a


n=int(input())
arr=list(map(int,input().split(" ")))

ans=kadane(arr,n)
del arr[ans[1]:ans[2]+1]
b=kadane(arr,len(arr))
print(ans[0])
print(b[0])