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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        int count = 0,ans=100009;
        for (int i = 0; i < 21; i++)
        { 
            if (b == 1 && i == 0)
                continue;
            else
            {
                count = i;
                long c = a;
                while (c)
                {
                    count++;
                    c = c / (b + i);
                }
            }
            ans = min(ans, count);
            count = 0;
        }
        cout << ans << "\n";

    }}
