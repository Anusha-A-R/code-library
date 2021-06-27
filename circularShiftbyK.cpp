#include <iostream>
#include <bitset>
using namespace std;
 
#define SIZE_INT sizeof(int) * 8

int circularShift(unsigned n, int k, bool leftShift)
{
    if (leftShift) {
        return (n << k) | (n >> (SIZE_INT - k));
    }
     return (n >> k) | (n << (SIZE_INT - k));
}
 
int main()
{
    unsigned n;
    int shift;
    cin>>n>>shift;
 
    cout << "No Shift     " << bitset<32>(n) << endl;
    cout << "Left Shift  " << bitset<32>(circularShift(n, shift, 1)) << endl;
    cout << "Right Shift " << bitset<32>(circularShift(n, shift, 0)) << endl;
 
    return 0;
}