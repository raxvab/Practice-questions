
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

    ll t;
    cin >> t;
    while (t--)
    {

        ll n, x, p, k;
        cin >> n >> x >> p >> k;
        p -= 1;
        k -= 1;
    
        ll a[n];
        ll f = 0;                           
      rep(i,n)
    cin >> a[i];
      sort(a, a + n);
      if (a[p] == x)
          cout << "0\n";
        else if(k==p)
        {
            if(x<a[p])
            {
                for (int i = p; i >= 0 && a[i] > x;i--)
                    f++;
                cout << f << endl;
            }
            else
            {
                for (int i = p; a[i] < x && i < n;i++)
                    f++;
                cout << f << endl;
            }
            
        }
        else if (k > p)
        {
            if (x > a[p])
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = p; a[i] > x && i >= 0 && i < n; i--)
                {
                    f++;
                }
                cout << f <<endl;
            }
        }
        else
        {
            if (x < a[p])
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = p ; a[i] < x && i >= 0 && i < n; i++)
                {
                    f++;
                }
                cout << f << endl;
            }
        }
    }
   
}
