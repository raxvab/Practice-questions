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

    int n, m, s = 0;

    cin >> n >> m;
    unsigned long int a[n], b[m];
    rep(i, n)
            cin >>
        a[i];
    rep(i, m)
            cin >>
        b[i];
    sort(a, a + n);
    sort(b, b + m);
    ll c = 0;
    
    rep(i, m)
    {
        if (b[i] >= a[0])
            break;
        else
        {
            s = (upper_bound(a, a + n, b[i]) - a);
            s = n - s;
            c += s;
        }
    }
    cout << c;
}