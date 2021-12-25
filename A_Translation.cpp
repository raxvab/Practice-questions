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
string s,t,c;cin>>s>>t;
int n=t.length();
for(int i=n-1;i>=0;i--)
{ c+=t[i];
}
//cout<<c;
if(c==s)
cout<<"YES";
else
cout<<"NO";

return 0;
}