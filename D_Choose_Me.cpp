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
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"

bool sortbysecdesc(const pair<int, int> &a,
                   const pair<int, int> &b)
{
    return a.second > b.second;
}
int main()
{

    speed;

    ll n, a, b, ans = 0, s1 = 0,s2=0, votes = 0;
    cin >> n;
    vector<pair<ll, ll>> v;
  rep(i, n)
    {
        cin >> a >> b;
        v.pb({a, b});
     //   g.pb({a, b});
        s1 += a;
        s2 += b;
    }
    

    sort(v.begin(), v.end(), sortbysecdesc);

    ll j = 0;
    while (s1>= ans)
    {

      ans += (v[j].fi + v[j].se);
        s1 -= v[j].fi;
        j++;
    }
    cout << j << endl;
    return 0;
}
