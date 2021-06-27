#include <iostream>
#define MAX 1000
using namespace std;

int main() {

	long long int t,n,m[MAX],flag,i,a,r,f,ten,fif;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    r=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>m[i];
	        if(m[i]==15)
	          r=1;
	    }
	   
	    if(m[0]!=5)
	       cout<<"NO"<<endl;
	    else
	    {   
	           a=5;flag=1;f=1;ten=0;fif=0;
	           
	        for(i=1;i<n && flag;i++)
	         {
	             
	             if(m[i]==5)
	             {
	               a=a+5;
	               f++;    
	             }
	             else if(m[i]==10)
	             {
	                 if(f<1 || m[i]-5 > a)
	                  flag=0;
	                 else{
	                a=a+5;
	                f--;ten++;}
	             }
	             else if(m[i]==15)
	            {
	                 
	                 if(m[i]-10 > a ||(f<2 && ten==0))
	                   flag=0;
	                 else{
	                 a=a+5;
	                 if(ten<1)
	                  f=f-2;
	                 else
	                  ten--;
	                 fif++;}
	             }
	             
              
	         }
	         
	         if(flag==0)
	              cout<<"NO"<<endl;
	         else
	              cout<<"YES"<<endl;
	       }
	  }
	return 0;
}