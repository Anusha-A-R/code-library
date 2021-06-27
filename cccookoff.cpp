#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,b,m;
	    cin>>n>>b>>m;
	    int a[m];
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    int ans=0;
	    int cache;
	    for(int i=0;i<m;i++)
	    {
	        if(i==0)
	        {
	          ans++;
	          cache=a[i]/b;
	        }
	        else if((a[i]/b)!=cache)
	        {
	            ans++;
	            cache=a[i]/b;
	        }
	        
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
