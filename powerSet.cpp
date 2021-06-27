#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
void findPowerSet(vector<int> const &S, int n)
{
    int N = pow(2, n);
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) {
                cout << S[j] << " ";
            }
        }
        cout << endl;
    }
}
 
int main()
{
    vector<int> S ;
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>S[i];
    }
    findPowerSet(S, n);
    return 0;
}