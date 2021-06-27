#include <iostream>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--)
	{
	    long int n,k,max=-1;
	    cin>>n>>k;
	    long int p[n];
	    for(long int i=0;i<n;i++)
	    {
	        cin>>p[i];
	        if(k%p[i]==0)
	        {
	           if(p[i]>max)
	             max=p[i];
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
