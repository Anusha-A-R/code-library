#include <iostream>
using namespace std;

int main() {

long long int t;
cin>>t;
for(long long int j=0;j<t;j++) {
    long long int D,d,p,q,ans=0,n;
    cin>>D>>d>>p>>q;
    
    n=int(D/d);
    
    ans=((p*n)+ (q*((n-1)*n)/2))*d;

    if(D%d!=0){
        ans=ans+(D%d)*(p+n*q);
}
    
   
       
   cout<<ans<<endl;

}
}