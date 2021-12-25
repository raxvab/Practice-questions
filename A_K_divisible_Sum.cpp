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

   // speed;
   int t;
    cin >> t;
    while(t--)
    {ll n,x,k;
    cin >> n >> k;
if(n==k)
{
    cout << 1 << endl;
    continue;
}
if (n==1)
{
    cout << k << endl;
    continue;
}
if (n<k)
{if(k%n==0)
        cout << k / n << endl;
        else
        {
            cout << (k / n) + 1 << endl;
        }
        
    //cout << 1 << endl;
    continue;
}if(n>k)
{
    n % k == 0 ? cout << 1 : cout << 2;
    cout << endl;
    continue;
}

   
    }}