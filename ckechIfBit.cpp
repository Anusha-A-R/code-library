#include <iostream>
#include <bitset>
using namespace std;

int isKthBitSet(int n, int k) {
    return n & (1 << (k - 1));
}
 
int main()
{
    int n ,k;
    cin>>n>>k;
 
    cout << n << " in binary is " << bitset<8>(n) << endl;
 
    if (isKthBitSet(n, k)) {
        cout << "k'th bit is set";
    }
    else {
        cout << "k'th bit is not set";
    }
 
    return 0;
}