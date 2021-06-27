#include <iostream>
using namespace std;



int main(void) {
	// your code goes
	long int t;
	cin>>t;
	while(t--)
	{
	    long int h,p;
	    cin>>h>>p;
	    if(h<p)
	      h=0;
	    while(h>0 && p>0)
	    {
	        h=h-p;
	        p=p/2;
	        
	    }
	    if(h<=0)
	      cout<<"1"<<endl;
	    else
	       cout<<"0"<<endl;

	}
	return 0;
}
