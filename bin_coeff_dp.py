def bin_coeff(n,k):
    C=[n]*k
    for i in range(n):
        C[i][0]=1
    for i in range(0,n):
        for j in range(min(i,k)):
            if j==0 | j==i:
                C[i][j]=1
            else:
                C[i][j]=C[i-1][j-1]+C[i-1][j]
           
    
    return C


print("If you need all the rows of pascals triangle then go for this method with space efficiency of nk")
print("Enter value of n")
n=int(input())
print("Enter value of k")
k=int(input())
a=[n]*k
a=bin_coeff(n,k)
for i in range(n):
    for j in range(min(i,k)):
        print(a[i][j],end=" ")

print("\nValue of "+str(n)+"C"+str(k)+" is "+str(a[k]))


