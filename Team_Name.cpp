//multitasker who code
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
    while(t--)
    {
  ll n;cin>>n;
        vector<string> v;
      
        rep(i,n)
        {
            string s;

            cin >> s;
            v.pb(s);
        }
        sort(v.begin(), v.end());
        string x,y;
        ll count = 0;
        rep(i, n) 
        for (ll j = i + 1; j < n;j++)
        {
            x = v[i];
            y = v[j];
            swap(x[0], y[0]);
         
            if ((x[0] != y[0]) || (x != y))
                if ((!(binary_search(v.begin(), v.end(), x))) && (!(binary_search(v.begin(), v.end(), y))))
                    count += 2;
        }
        cout << count << "\n";
    }
    return 0;
}