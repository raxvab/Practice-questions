#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define li long int
#define fi first
#define se second
#define ve vector<ll>
#define mp make_pair
#define pr pair<ll,ll>
#define rep(i,n) for(ll i=0;i<n;i++)
#define repji(j,i,n) for(ll j=i;j<n;j++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
speed;
ll n;
cin>>n;
ll min=1e7;
ll a[n],b[n];
rep(i,n)
{cin>>b[i];}
rep(i,n-1){
if(abs(b[i]-b[i+1])<min)
    min=abs(b[i]-b[i+1]);
}
if(abs(b[0]-b[n-1])<min)
{
    cout<<1<<" "<<n;return 0;
}
rep(i,n-1){
if(abs(b[i]-b[i+1])==min)
{
     cout<<i+1<<" "<<i+2;return 0;
}
   // min=abs(b[i]-b[j]);
}

/*
rep(i,n){
repji(j,i+1,n)
{
    if(abs(b[i]-b[j])<min)
    min=abs(b[i]-b[j]);
}}
rep(i,n)
{
repji(j,i+1,n)
{
    if(abs(b[i]-b[j])==min)
   {  
  cout<<i+1<<" "<<j+1;return 0;}
}

}
*/


return 0;
}