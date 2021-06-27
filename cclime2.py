# cook your dish here
t=int(input())
arr=list(map(int,input().split(" ")))
ans=sum(arr)
q=int(input())
que=list(map(int,input().split(" ")))
for i in range(q):
    ans+=ans
    print(ans%(pow(10,9)+7))
   