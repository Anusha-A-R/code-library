def bin_coeff(n,k):
    if k==0|k==n:
        return 1
    return bin_coeff(n-1,k-1)+bin_coeff(n-1,k)

   


print("If you need only one row of pascals triangle then go for this method with space efficiency of k")
print("Enter value of n")
n=int(input())
print("Enter value of k")
k=int(input())

a=bin_coeff(n,k)


print("\nValue of "+str(n)+"C"+str(k)+" is "+str(a))


