#include <iostream>
using namespace std;


int main() {
	long int t;
	cin>>t;
	while(t--)
	{
	    long int n,k,sum=0;
	    cin>>n>>k;
	    long int a[n];
	    for(long int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]>k)
	        sum+=a[i]-k;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
