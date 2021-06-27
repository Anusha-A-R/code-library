#include <iostream>
using namespace std;
 
void swap(int &x, int &y)
{
    if (x != y)
    {
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }
}
 
int main()
{
    int x ,y;
    cin>>x>>y;
 
    cout << "Before swap: x = " << x << " and y = " << y;
    swap(x, y);
    cout << "\nAfter swap: x = " << x << " and y = " << y;
 
    return 0;
}