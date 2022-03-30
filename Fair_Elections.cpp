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
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n], b[m], s1 = 0, s2 = 0;
        rep(i, n)
        {
            cin >>
                a[i];
            s1 += a[i];
        }
        rep(i, m)
        {
            cin >>
                b[i];
            s2 += b[i];
        }
        sort(a, a + n);
        sort(b, b + m);
        ll count = 0, sum = 0; /*
                     ll k = ceil((s2 - s1) / 2);
                       if(s1>s2)
                       {
                           cout << 0 << endl;
                           continue;
                       }
                       else
                       for (ll i = 0, j = m-1; i < n, j >=0;i++,j--)
                       {
                           sum += b[j] - a[i];
                          
                           if (sum>k)
                               break;
                           else
                           count++;
                         }
*/
        if (s1 > s2)
        {
            cout << 0 << endl;
            continue;
        }
        else
            for (ll i = 0, j = m - 1; i < n, j >= 0; i++, j--)
            {
                s2 -= b[j];
                s2 += a[i];
                s1 -= a[i];
                s1 += b[j];
                count++;
                if (a[i] >= b[j])
                    break;
                if (s1 > s2)
                    break;
            }
        if (s2 >= s1)
            cout << -1 << endl;
        else
            cout << count << endl;
    }
}