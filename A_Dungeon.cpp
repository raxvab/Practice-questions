//google raxvab
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
      ll a,b,c;
        cin >> a>>b>>c;
        ll m = min(a, b);
        m = min(m, c);
        

        if(((a+b+c)%9==0)&&(a+b+c>=9)&&(a+b+c)/9<=m)
            cout << "YES\n";
        else
        cout << "NO\n";
        }}