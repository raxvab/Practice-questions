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
    int n;
    cin >> n;
    ll a[n];
    rep(i,n)
        cin >> a[i];
    sort(a, a + n);
    ll s[n];
    s[0] = a[0];
    for (int i = 1; i < n; i++)
        s[i] = s[i - 1] + a[i];

    ll ans = 0;
    rep(i,n)
    {
        ans += (s[n - 1] - s[i]) - (a[i] * (n - i - 1));
    }
    cout << ans << endl;
    return 0;
}