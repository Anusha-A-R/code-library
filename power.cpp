#include <stdio.h>
int power(int x, unsigned n)
{
    int pow = 1;
     while (n)
    {
        if (n & 1) {
            pow *= x;
        }
        n = n >> 1;
        x = x * x;
    }
    return pow;
}
 
int main(void)
{
    int x ;
    unsigned n;
    cin>>x>>n;
    printf("pow(%d, %d) = %d", x, n, power(x, n));
 
    return 0;
}