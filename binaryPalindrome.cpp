#include <iostream>
using namespace std;
bool isPalindrome(unsigned n)
{
    unsigned rev = 0;
     unsigned k = n;
    while (k)
    {
        rev = (rev << 1) | (k & 1);
        k = k >> 1;     
    }
     return n == rev;
}
 
int main()
{
    int n ;
    cin>>n;
    if (isPalindrome(n)) {
        cout << n << " is a palindrome";
    }
    else {
        cout << n << " is not a palindrome";
    }
    return 0;
}







    