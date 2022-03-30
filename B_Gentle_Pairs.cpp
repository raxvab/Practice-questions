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

 ll n, c = 0, i, j;
    cin >> n;
    double a[n], b[n],slope;
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
            }
            rep(i,n)
            {
                cin >> a[i] >> b[i];
            }
            set<double, greater<double>> s;
            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    slope = (b[i] - b[j]) / (a[i] - a[j]);
                    if (slope >= -1 && slope <= 1 && i != j)
                    {
                        s.insert(slope);
                    }
                }
            }
          
            for (auto i:s)
            {
                c++;
            }
            cout << c << endl;
           
        
    
}