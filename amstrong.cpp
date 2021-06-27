#include <bits/stdc++.h>

using namespace std;

int main()
{
int number, temp, remainder, result = 0, n = 0 ;
cout << “Enter an integer : “;
cin >> number;
temp = number;
while (temp != 0)
{
temp /= 10;
++n;
}

temp = number;
while (temp != 0)
{
remainder = temp;
result += pow(remainder, n);
temp /= 10;
}

if(result == number)
cout << number << ” is an Armstrong number\n”;
else
cout << number << ” is not an Armstrong number\n”;

return 0;
}

