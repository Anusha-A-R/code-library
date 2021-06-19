def bin_coeff(n,k):
    a=[0]*(k+1)
    a[0]=1
    for i in range(0,n+1):
        for j in range(min(i,k),0,-1):
            a[j]=a[j]+a[j-1]
    
    return a


print("If you need only one row of pascals triangle then go for this method with space efficiency of k")
print("Enter value of n")
n=int(input())
print("Enter value of k")
k=int(input())
a=[]
a=bin_coeff(n,k)
for i in range(k+1):
        print(a[i],end=" ")

print("\nValue of "+str(n)+"C"+str(k)+" is "+str(a[k]))


