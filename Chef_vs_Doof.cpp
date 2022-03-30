#include <bits/stdc++.h> 
using namespace std; 


typedef long long int ll; 
int main()
{
    ll t;cin>>t;while(t--)
    {
ll n,q;
cin>>n;
ll arr[n];

for(ll i=0;i<n;i++)
cin>>arr[i];
cin>>q;
ll b[q][2];
for(ll i=0;i<q;i++)
cin>>b[i][0]>>b[i][1];
//sort(arr,arr+n);
for(ll i=0;i<q;i++)
{ll count=0,m=0;
for(ll j=0;j<n;j++)
{
ll c=b[i][0]+b[i][1]-arr[j];
if(c<0)
continue;
else if(c>0)
count++;
else
{m=-1;
break;
}}
if(m<0)
cout<<m<<"\n";
else
cout<<count<<"\n";


}


    }

	return 0; 
} 
