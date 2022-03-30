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
   int main()
        {
            
            speed;
            int t;
            cin >> t;
            while (t--)
            {
                int n, k;
                cin >> n >> k;
               int a[n][2];
               rep(i, n)
                       cin >>
                   a[i][0] >> a[i][1];

               int ans = -1;
               for (int i = 0; i < n; ++i)
               {
                   int mx = 0;
                   for (int j = 0; j < n; ++j)
                   {
                       mx = max(mx, abs(a[i][0] - a[j][0]) + abs(a[i][1] - a[j][1]));
                   }
                   if (mx <= k)
                       ans = 1;
                }
                cout << ans <<endl;
            }
        }