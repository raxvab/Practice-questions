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
 
        string s;
        char u;
        bool c = true;
        cin >> s;

        for (int i = 1; i < s.length(); i++)
        {
            if (islower(s[i]))
            {
                c = false;
            }
        }

        if (c == true)
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (islower(s[j]))
                    u = toupper(s[j]);
                else
                    u = tolower(s[j]);
                cout << u;
            }
        }
        else
            cout << s;
      
    }