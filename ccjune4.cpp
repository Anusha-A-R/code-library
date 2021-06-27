#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        


        for(long int i=1;i<=n;i++)
        {
            int temp=1;
            if(i%2==0)
              temp=2;
            for(long int j=1;j<=n;j++)
            {
                if(temp==2)
                {
                    cout<<(n*i)-(j-1)<<" ";
                }
                else
                {
                    cout<<n*(i-1)+j<<" ";
                }
            }
            cout<<"\n";

        }

    }
	return 0;
}
