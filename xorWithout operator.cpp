#include <iostream>
#include <bitset>
using namespace std;
 
int findBits(int x, int y) {
    return (x | y) - (x & y);
}
 
int main()
{
    int x ,y;
    cin>>x>>y;
 
    cout << "The first number in binary is " << bitset<8>(x) << endl;
    cout << "The second number in binary is " << bitset<8>(y) << endl;
 
    cout << "\nXOR is " << bitset<8>(findBits(x, y));
 
    return 0;
}




