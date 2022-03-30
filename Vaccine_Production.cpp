//raxvab's
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
/*#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
*/
#define endl "\n"

int main()
{
    // speed;
   /* int t;
    cin >> t;
    while (t--)
    {*/
        int d1, d2, v1, v2, p;
        cin >> d1 >> v1 >> d2 >> v2 >> p;
        ll s=0;
      //  vector<ll> vd1, vd2;

        int i = 0;
        do
        {
            i++;
            if(d1<=i)
            s += v1;
         //   vd1.push_back(s1);
         if(d2<=i)
            s += v2;
           // vd2.push_back(s2);
        // i++;


        } while (s<p);
        cout << i<< endl;
    }
        