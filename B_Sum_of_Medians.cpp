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
/*#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
*/#define endl "\n"

int main()
{
   // speed;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
     ll a[n * k];
        rep(i, n*k)
        cin >>a[i];
        sort(a, a + n);
ll sum1= 0,sum=0;
        for (int i =(n*k)-1; i >k;i-=k+1)
        {
            sum1+=a[i];
         //   cout << a[i] << " " ;
        }
       // cout <<endl;
        for (int i = (n * k)- 1; i>n;i-=n+1)
        {
            sum+=a[i];
        }
        cout << max(sum,sum1)<< endl;
        }}