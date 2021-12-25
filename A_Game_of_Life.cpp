#include <bits/stdc++.h>
#define needforspeed              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
#define ll long long int
using namespace std;
int main()
{
    needforspeed;
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> ws;
        getline(cin, s);
        vector<ll> pos;
        ll k = 0;
        ll c = 0;
        string s1 = s;
        for (ll j = 0; j < m; j++)
        {
            for (k = 0; k < n; k++)
            {
                if (s[k] == '0')
                {
                    if (s[k - 1] == '1' && s[k + 1] != '1')
                        s1[k] = '1';
                    else if (s[k - 1] != '1' && s[k + 1] == '1')
                        s1[k] = '1';
                }
            }
            if (s == s1)
                j = m;
            s = s1;
        }
        /*ll len=pos.size();
        for(ll h=0; h<len; h++)
        {
            s[pos[h]]='1';
        }*/
        cout << s << endl;
    }
}
