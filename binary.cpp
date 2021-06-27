
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
#include <iostream>
#include <string>
#include <bitset>
using namespace std;
 
int generate(int n)
{
    
    for (int i = 1; i <= n; i++)
    {
        bitset<8> binary(i);
        cout << binary.to_string() << ' ';
    }
}
 
int main()
{
    int n ;
    cin>>n;
    generate(n);
 
    return 0;
}