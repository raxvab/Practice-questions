//google raxvab
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
       int n;
        cin >> n;
        ll a[n];
        ll e = 0, o = 0;
        rep(i,n)
        {
            cin >> a[i];
       
            a[i] % 2 == 0 ? e++ : o++;
        }
        ll m;
        ll ans = 0;
        if (e != o&&e&&o)
        {
            m=min(e,o);
            ans = (m - 1) * 2;
            ans += max(e, o);
            cout << ans << "\n";
       

        }
        else if(e&&o&&e==o)
        {
           if(e==1)
              cout << 1 << "\n";
          else
           cout << e * 2 << "\n ";
            
           
        }
        else if(e)
        {
            cout << e << "\n";
            
        } 
else
{
    cout << o << "\n";
}


        }

        
        
        
        
        
        }