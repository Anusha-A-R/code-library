#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    long int f=0;
	    cin>>s;
	    int n=s.length();
	    
	    for(long int i=0;i<n-1;i++)
	    {
	        if((s[i]=='x' && s[i+1]=='y')||(s[i]=='y' && s[i+1]=='x'))
	        {
	            f++;
	            i++;
	        }
	    }
	    cout<<f<<endl;
	}
	return 0;
}
