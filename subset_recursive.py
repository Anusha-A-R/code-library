
def isSubsetSum(set, n, sum):
 
    if (sum == 0):
        return True
    if (n == 0):
        return False
 
    # If last element is greater than sum, then ignore it
    if (set[n - 1] > sum):
        return isSubsetSum(set, n - 1, sum)
 
    # (a) including the last element
    # (b) excluding the last element
    return isSubsetSum(set, n-1, sum) or isSubsetSum(set, n-1, sum-set[n-1])

n=int(input())
set=list(map(int,input().split(" "))
sum=int(input())

if (isSubsetSum(set, n, sum) == True):
    print("Found a subset with given sum")
else:
    print("No subset with given sum")
 