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
ll n, p;
cin >> n >> p;
ll a[n],s=0;
rep(i,n)
{
    cin >> a[i];
    if(i%2)
        a[i]--;
    s += a[i];
}
if(s<=p)
    cout << "Yes\n";
    else
        cout << "No\n";
return 0;
}