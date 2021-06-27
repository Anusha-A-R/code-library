#include <iostream>
using namespace std;
#include<math.h>
int main() {
	long int t;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    long int s[n];
	    
	    for(long int i=0;i<n;i++)
	    {
	       cin>>s[i]; 
	    }
	    long int sum=0;
	     for(long int i=0;i<n-1;i++)
	    {
	        sum=sum+(abs(s[i+1]-s[i])-1);
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
