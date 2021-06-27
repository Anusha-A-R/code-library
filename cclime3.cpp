#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a[5],n;
	while(t--)
	{
	    int sum=0;
	    for(int i=0;i<5;++i)
	    {
	        cin>>a[i];
	    }
	    cin>>n;
	    for(int i=0;i<5;++i)
	    {
	       sum=sum+(a[i]*n); 
	    }
	    if(sum>120)
	      cout<<"Yes";
	     else if(sum<=120)
	       cout<<"No";
	   cout<<endl;
	    
	}
	return 0;
}
