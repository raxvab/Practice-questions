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
ll n,k,c=0,r=0,cnt=0;cin>>n>>k;
ll a[n];

rep(i,n)
{cin>>a[i];

while(a[i])
{
r=a[i]%10;
if(r==4||r==7)
cnt++;
a[i]/=10;

}//cout<<a[i]<<endl;
if(cnt<=k)
{c++;
//break;
}cnt=0;

}
cout<<c<<endl;


return 0;
}