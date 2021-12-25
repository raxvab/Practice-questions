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
                int n;cin>>n;
                ll a[n];
          
                rep(i, n)
                {
                cin >>a[i];
                }
                ve v;

                for (int i = 0; i<n;i++)
                {
                    v.push_back(a[i]);
                    v.push_back(a[n - 1 - i]);

                }
                rep(i, n)
                        cout
                    << v[i] << " ";
                cout <<endl;
            }}