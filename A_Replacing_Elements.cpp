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
    while(t--)
    {
        ll n, d;
        ll c = 0;
        cin >> n >> d;
        ll a[n];
        rep(i, n)
                cin >>
            a[i];
        sort(a, a + n);
        rep(i, n)
        {
            if (a[i] <= d)
            {
                c++;
                //break;
            }
        }
        if (c==n)
        {
            cout << "YES\n";
            continue;
        }
       else if ((a[0] + a[1]) <= d)
        {
            cout << "YES\n";
            continue;
        }else
        {
            cout << "NO\n";
        }
        
        
       

 
}}