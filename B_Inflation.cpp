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
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"

int main()
{

    speed;
    int t;
    cin >> t;
    while (t--)
    {
       
        ll n, k;
        cin >> n >> k;
        ll a[n];
        rep(i, n)
                cin >>
            a[i];
        ll s = 0;
        rep(i, n)
            s += a[i];
        ll c = a[0];
        for (ll i = 1; i < n; i++)
        {
            ll cnt = ((a[i] * 100) / c);
            if ((a[i] * 100) % c)
                cnt++;
            if (cnt > k)
            {
                c = (a[i] * 100) / k;
                if ((a[i] * 100) % k)
                    c++;
            }
            c += a[i];
        }
        cout << c - s << "\n";
    }
    }
