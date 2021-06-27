#include <stdio.h>
 
 int findMissingElement(int A[], int n)
{
    int XOR = 0;
 
    for (int i = 0; i < n; i++) {
        XOR ^= A[i];
    }
     for (int i = 1; i <= n + 1; i++) {
        XOR ^= i;
    }
 
    return XOR;
}
 
int main(void)
{
    
    int A[] = { 1, 2, 3, 4, 6 };
    int n = sizeof(A)/sizeof(A[0]);
 
    printf("The missing element is %d", findMissingElement(A, n));
 
    return 0;
}