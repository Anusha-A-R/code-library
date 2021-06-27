#include <iostream>
using namespace std;

int main() {
	long int t,temp=0;
	cin>>t;
	while(t--)
	{
	    long int n,ans;
	    cin>>n;
	    if(n%2!=0){
	     ans=n/2;
	     temp=1;
	    }
	    else if(n%2==0 && (n-2)%4==0){
	     ans=n/4;
	     temp=1;
	    }
	    else if((n-4)%8==0){
	     ans=(n-4)/8;
	     temp=1;
	    }
	    else
	    {long int a=n;
	        for(int i=0;i<60;i++)
	        {
	            
	            a=a/2;
	            if(a%2==0){
	            if((a-4)%8==0)
	            {
	                
	                ans=(a-4)/8;
	                i=60;
	                temp=1;
	            }
	            }
	        }
	    }
	    if(temp==0)
	    {
	       
	         ans=0;
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}
