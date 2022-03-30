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
        ll n;
        string s;

        cin >> n;
        int i = 9;
        for (int i = 9; i > 0;i--)
        {
            if(n-i>=0)
                {n -= i;
                    s.push_back((char)i+48);}
                    
                    
        }
       // sort(s.begin(), s.end(), greater<char>());
        sort(s.begin(),s.end());
        if (n == 0)
                cout
            << s << "\n";
        else
        {
            cout << -1 << "\n";
            }
            

          //  cout << ans << "\n";
    
}}