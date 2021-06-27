#include <iostream>
#include <cmath>
using namespace std;
 
unsigned findNextPowerOf2(unsigned n)
{
    
    n = n - 1;
    int lg = log2(n);
    return 1U << lg + 1;
}
 
int main()
{
    unsigned n ;
    cin>>n;
    cout << "The next power of 2 is " << findNextPowerOf2(n);
    return 0;
}