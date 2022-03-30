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
    vector<string> v;
    cin >> t;while(t--)
    {
        string s;
        

        cin >> s;
        v.pb(s);

    }
    int c = 0;
    for (decltype(v.size()) i = 0; i <= v.size() - 1; i++)
    {
        for (decltype(v.size()) j = 0; j <= v.size() - 1; j++)
        {
            string s = "!" + v[j];
            if (v[i] == s)
            {
                c++;
                cout << v[j];
                break;
            }
        }
        if (c)
            break;
}
if(c==0)
    cout << "satisfiable";
return 0;
    }