#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int

int main()
{
ll t;cin>>t;while(t--)
{
ll n,k;cin>>n>>k;
ll a[n];
for(ll i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
ll v=-1;
for(ll i=n-1;i>=0;i--)
{if(k%a[i]==0)
{
   v=a[i];
   break;

}}
cout<<v<<"\n";
}
}