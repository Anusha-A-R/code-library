#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void f() {
   ll n ,a,b;
   ll area=LONG_MAX;
   cin>>n;
   vector<pair<ll,ll>> x;
   vector<pair<ll,ll>> y;
   multiset <ll> k;
   multiset <ll> l;
   
   for(int i=0;i<n;i++){
       cin>>a>>b;
       x.push_back({a,b});
       y.push_back({b,a});
       k.insert(a);
       l.insert(b);
       
   }
   sort(x.begin(),x.end());
   sort(y.begin(),y.end());
   ll max_hieght=0,min_hieght=LONG_MAX,p1=0,p2=0;
   for(int i=0;i<n-1;++i)
   {
       max_hieght=max(x[i].second,max_hieght);
       min_hieght=min(x[i].second,min_hieght);
       p1=max_hieght-min_hieght;
       auto it=l.find(x[i].second);
       l.erase(it);
       p2=*(l.rbegin())-*(l.begin());
       ll narea=p1*(x[i].first-x[0].first)+ p2*(x[n-1].first-x[i+1].first);
       area=min(area,narea);
       
   }
    ll max_w=0,min_w=LONG_MAX,w1=0,w2=0;
   for(int i=0;i<n-1;++i)
   {
       max_w=max(y[i].second,max_w);
       min_w=min(y[i].second,min_w);
       w1=max_w-min_w;
       auto it=k.find(y[i].second);
       k.erase(it);
       w2=*(k.rbegin())-*(k.begin());
       ll narea=w1*(y[i].first-y[0].first)+ w2*(y[n-1].first-y[i+1].first);
       area=min(area,narea);
       
   }
   if(area==LONG_MAX){
       cout<<'0';
       
   }
   else{
       cout<<area;
   }
   cout<<endl;
   

}
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        f();
    }
    return 0;
}
