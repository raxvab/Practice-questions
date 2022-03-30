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
int main()
{
    speed;
    ll t;
    cin >> t;
    while (t--)
    {
        ll c, d, s1 = 0, s2 = 0;
        cin >> d >> c;
        ll day1[3];
        ll day2[3];
        rep(i, 3)
        {
            cin >> day1[i];
            s1 += day1[i];
        }
        rep(i, 3)
        {
            cin >> day2[i];
            s2 += day2[i];
        }
       
        ll ans1 = s1 + s2 + 2 * d;
        if (s1 + s2 >= 300)
        {
            if (s1 < 150)
            {
                s1 += d;
            }
            if (s2 < 150)
            {
                s2 += d;
            }
        }
        ll ans2 = s1 + s2 + c;
       
        if (ans1 > ans2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}