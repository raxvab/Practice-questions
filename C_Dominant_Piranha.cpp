
//search for RAXVAB once
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define li long int
#define fi first
#define se second
#define ve vector<ll>
#define mp make_pair
#define pr pair<ll, ll>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repji(j, i, n) for (ll j = i; j < n; j++)
#define rev(i, n) for (ll i = n; i >= 0; i--)
#define speed    ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"

#include <bits/stdc++.h>
using namespace std;

int main()
{
    speed;

    ll t;
    cin >> t;
    while (t--)
    {
       ll n;
        cin >> n;
        ll a[n];
    
                ll mx = -1;
                for (int i = 0; i < n; i++)
                {
                    cin >> a[i];
                    mx = max(mx, a[i]);
                }
                ll ans = -1;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] != mx)
                        continue;
                    if (i > 0 && a[i - 1] != mx)
                        ans = i + 1;
                    if (i < n - 1 && a[i + 1] != mx)
                        ans = i + 1;
                }
                cout << ans << endl;
            
    }
    
    }