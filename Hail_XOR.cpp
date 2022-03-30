//search for RAXVAB once
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define li long int
#define ld long double
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
    // speed;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[n];
        rep(i, n)
                cin >>
            a[i];

        rep(i, n - 1)
        {
           
            for (int j = 30; j >= 0; j--)
            {
             ll p = (1 << j);
               // cout << p << endl;
                if (x <= 0)
                    break;

                if ((p&a[i]) != 0)
                {
                   // cout << "dxfghjkjhgfdsdfgh";
                    a[i] ^= (1LL << j);
                    int b = 0;
                    for (int l = i + 1; l < n; l++)
                    {
                        
                        if ((((ll)(1LL << j)) & a[l]) !=0)
                        {
                            a[l] ^= (1LL << j);
                            x--;
                            b++; //flag
                            break;
                        }
                    }

                    if (!b)
                    {
                        a[n - 1] ^= (1LL << j);
                        x--;
                    }
                    // }
                }

                if (x <= 0)
                    break;
            }
        }

        rep(i, n)

                cout
            << a[i] << " ";
        cout << endl;
    }
}