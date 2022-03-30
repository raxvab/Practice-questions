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
ll t;
cin >> t;
while(t--)
{
    ll n;cin>>n;
    ll a[n],b[n],k=0,m=0;
    rep(i, n)
            cin >>
        a[i];
    /* {
                ll x;
                cin >> x;
                if (x & 1)
                    b[k] = x, k++;
                   else
                       a[m] = x,m++;
                    }
                    ll y = m, z = k;
                    sort(a, a + m, greater<ll>());
                    sort(b, b + k, greater<ll>());
                    while (m < n)
                    {
                        a[m] = b[k];
                        k++;
                        m++;
                  }
*/
    ll cnt = 0;
    rep(i, n)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (__gcd(a[i], 2 * a[j]) > 1 || __gcd(2 * a[i], a[j]) > 1)
                cnt++;
        }
  }

  cout << cnt;
  cout << "\n";
   }

return 0;
}