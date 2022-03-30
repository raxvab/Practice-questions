#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        unordered_map<char, ll> m1, m2;
        for (ll i = 0; i < n; i++)
        {
            m1[a[i]]++;
            m2[b[i]]++;
        }
        ll c = 0;
        for (auto i : m1)
        {
            if (i.second >= q && m2.find(i.first) == m2.end() && i.first != 'z')
            {
                c = 1;
                break;
            }
        }
        c == 0 ? cout << "No\n" : cout << "Yes\n";
        }
}