#include<iostream>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int c,r;
        int ii,ji,i,j;
        cin>>c>>r;

       float iff,jf,ansi,ansj;
       ii=c/9;
       iff=float(c)/9;
       ji=r/9;
       jf=float(r)/9;
       ansi=iff-ii;
       ansj=jf-ji;
       if(ansi!=0)
          ii=ii+1;
        if(ansj!=0)
          ji=ji+1;
        i=ii;
        j=ji;
        if(i==j)
            cout<<"1 "<<i<<endl;
            
        else if(i<j)
            cout<<"0 "<<i<<endl;
        else if(j<i)
            cout<<"1 "<<j<<endl;

    }
    return 0;
}
