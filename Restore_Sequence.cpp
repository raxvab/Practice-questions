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
#define rev(i, n) for (ll i = n-1; i >= 0; i--)
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
/*ll a[1299720] = {0};

void SieveOfEratosthenes(ll n)
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {
       
        if (prime[p] == true)
        {
           
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    ll o = 0;
    for (int p = 2; p <= n; p++)
        if (prime[p])
           {
               a[o] = p;
               o++;
           }
}
   
   
*/
int main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
    {/*
       ll n = 1299720;
        SieveOfEratosthenes(n);
        n = 0;
        cin >> n;
        ll b[n];
        rep(i, n)
        cin>>b[i];
        ll c[n];
        rep(i, n)
            c[i] = a[i];
        rep(i, n) 
        if (b[i] != i)
            c[i] = c[b[i]-1];
        rep(i, n)
                cout
            << c[i]<<" ";
        cout << endl;*/
ll n;cin>>n;
ll x = 6000001;
ll a[n],b[n];
rep(i, n)
cin>> b[i];
rev(i, n)
{
    if (i==n-1)
    {
        a[i] = x;
        continue;}
    else if (b[i] == (i + 1))
    {
         a[i] = --x;
        }
        else
        {
            a[i] = a[b[i]];
        }
        

    }
    rep(i, n)
            cout
        << a[i] << " ";
    cout << endl;

     }}