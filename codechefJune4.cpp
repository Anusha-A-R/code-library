using namespace std;
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int m,n;
        int i;
        
        cin>>n>>m;
        long long int a[n],b[m],MAX=1e9;
        
        
        for(i=0;i<n;i++)
        {
           cin>>a[i];
          
        }
         
        for(i=0;i<m;i++)
        {
           cin>>b[i];
        }
        map<int,int> mp;
        
         for(i=0;i<n;i++)
        {
           if(i==0){
              mp[i]=0;
           }
           else if(a[i]!=0){
               mp[i]=0;
           }
           else{
               mp[i]=MAX;
           }
           
        }
        
       int right=-1;
        
        
        for(i=0;i<n;i++)
        {
           if(a[i]==1){
               right=i;
           }
           if(right!=-1){
               if(a[i]==0)
               {
                   mp[i]=min(mp[i],i-right);
               }
           }
           
        }
        
   int left=-1;
        
        
        for(i=n-1;i>=0;i--)
        {
           if(a[i]==2){
               left=i;
           }
           if(left!=-1){
               if(a[i]==0)
               {
                   mp[i]=min(mp[i],left-i);
               }
           }
           
        }
       
        for(i=0;i<m;i++){
           int j=b[i]-1;
            if(mp[j]!=MAX){
            cout<<mp[j]<<" ";
            }
            else{
                cout<<-1<<" ";
                
                
            }
        }
        cout<<endl;
        
         
    }
    return 0;
}

