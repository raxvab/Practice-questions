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
    cin >> t;
    unordered_map< string,  int> mp,mp2;
    vector<pair<string, int>> v;
    string s;
    int x;
    while (t--)
    {
        cin >> s >> x;
        v.push_back({s, x});
        mp[s] += x;
    }

    int max = -2000;
 
    for (auto itr = mp.begin(); itr != mp.end(); ++itr)
    {
if(max<(itr->second))
    {max = itr->second;

    }
        }

        for (int i = 0; i < v.size(); i++)
            {s = v[i].first;
        x = v[i].second;
        mp2[s] += x;
     
            if(mp2[s] >= max &&mp[s] == max)
            {cout << s;
        break;}
            }
 return 0;
}