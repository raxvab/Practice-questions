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
        int n;
        cin >> n;
        if (n == 1)
        {
            int m;
            cin >> m;
            cout << m << endl;
        }
        else
        {
            int a[n];
            rep(i, n)
                    cin >>
                a[i];
            sort(a, a + n);
            if (n == 2)
                cout << a[1] << endl;
            else if (n == 3)
            {
                int ans;
                int c = a[0] + a[1];

                if (c > a[2])
                {
                    if ((a[0] + a[2]) < c)
                        ans = a[0] + a[2];
                    else
                        ans = c;
                }
                else
                    ans = a[2];
                cout << ans << endl;
            }

            else
            {
                int s = a[0] + a[1] + a[2];
                if (s <= a[3])
                    cout << a[3] << endl;
                else
                {
                    s -= a[0];
                    if (s a[3])
                    {
                        (a[0] + a[3]) > s ? cout << a[0] + a[3] : cout << s;
                    }
                    cout << endl;
                }
            }
        }
    }
}