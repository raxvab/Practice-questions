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
#define speed                         
    ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"

int main()
{
    speed;
    /*  ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        rep(i, strlen(s))
        if(s[i]<=122&&s[i]>=91)

    }*/
    string s;
    cin >> s;
    int low = 0, high = 0;

    for (auto i : s)
    {
        if (islower(i))
            low++;
        else
            high++;
    }
    if (low >= high)
    {
        for (int i = 0; i < s.size(); i++)
            cout << char(tolower(s[i]));
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
            cout << char(toupper(s[i]));
    }
    return 0;
}
