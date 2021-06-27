#include <iostream>
using namespace std;

long int point(long int a)
{
    long int sum=0,num;
    while(a!=0)
    {
        num=a%10;
        sum=sum+num;
        a=a/10;
    }
    return sum;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long int a[n],b[n];
	    for(long int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        cin>>b[i];
	    }
	    long int ap=0,bp=0;
	    for(long int i=0;i<n;i++)
	    {
	        long int k,l;
	        k=point(a[i]);
	        l=point(b[i]);
	        if(k>l){
	           ap=ap+1;

	        }
	        else if(l>k){
	           bp=bp+1;

	        }
	        else if(l==k)
	        {
	           ap=ap+1;
	           bp=bp+1;
	        }


	    }
	    if(ap>bp)
	    {
	        cout<<"0 "<<ap<<endl;
	    }
	    else if(bp>ap)
	    {
	        cout<<"1 "<<bp<<endl;
	    }
	    else
	    {
	        cout<<"2 "<<ap<<endl;
	    }
	}
	return 0;

}
