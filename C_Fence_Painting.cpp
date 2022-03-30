#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forr(i, a, n) for (int i = a; i < n; i++)
#define rep(i, n) forr(i, 0, n)
#define repp(i, n) forr(i, 1, n + 1)
#define pb push_back
#define mp make_pair
#define vvi vector<vector<int>>
int t, n, m, a[100005], b[100005], c[100005], ans[100005], cnt;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        rep(i, m) cin >> c[i];
        bool f = 0;
        rep(i, n) if (b[i] == c[m - 1]) f = 1, ans[m - 1] = i;
        if (!f)
        {
            cout << "NO\n";
            continue;
        }
        cnt = 0;
        map<int, vector<int>> mm;
        rep(i, n)
        {
            if (a[i] != b[i])
            {
                mm[b[i]].pb(i);
                cnt++;
            }
        }
        for (int i = m - 1; i >= 0; i--)
        {
            if (!mm[c[i]].empty())
            {
                ans[i] = mm[c[i]][mm[c[i]].size() - 1];
                mm[c[i]].pop_back();
                cnt--;
            }
            else
                ans[i] = ans[m - 1];
        }
        if (cnt)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        rep(i, m) cout << ans[i] + 1 << ' ';
        cout << endl;
    }
    return 0;
}
