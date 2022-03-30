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
cin >> n;
vector<pair<ll, ll>> v(n);
ll x;
cin >> x;
//ll a[n],b[n]={0};

rep(i, n)
{
    cin >> v[i].first;
    v[i].second = i + 1;
    //v.push_back(mp(a[i], i));
}
ll j = n - 1, i = 0;
sort(v.begin(), v.end());
while(i<j)
{

    if (v[i].first + v[j].first == x)
    {
        cout << min(v[i].second, v[j].second) << " " << max(v[i].second, v[j].second) << "\n";
        return 0;
    }
    if (v[i].first + v[j].first< x)
        i++;
    if (v[i].first + v[j].first > x)
        j--;
    
    }
    cout << -1;
    return 0;
}