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
    cin >> t;while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        map<ll, ll> mp;
        rep(i, n)
                cin >>
            a[i];
        rep(i, n)
            repji(j, i, n)
                mp[a[j] - a[i]]++;

        cout << mp.size()-1 << endl;
    }
    }