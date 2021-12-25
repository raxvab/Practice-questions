#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define NeedForSpeed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
ll dist(ll a,ll b,ll c,ll d)
{
    ll ds =sqrt(((d - b) * (d - b)) + ((b - a) * (b - a)));
    return ds;
}
void solve(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int l = max(a, c), m = min(a, c), n = max(b, d), q = min(b, d);
    int x = abs(c - a), y = abs(d - b);
    //cout<<l<<m<<n<<q<<endl;
    if (a == c && a == e && f > q && f < n)
        cout << x + y + 2 << endl;
    else if (b == d && b == f && e > m && e < l)
        cout << x + y + 2 << endl;
    else
        cout << x + y << endl;
    /*ll xa, xb, xf, ya, yb, yf;
    cin >> xa >> ya >> xb >> yb >> xf >> yf;
    ll d = sqrt(((yb - ya) * (yb - ya)) + ((xb - xa) * (xb - xa)));
    //cout << xa << xb;
     long double m = yb - ya;
    m =m/(xb - xa);
    ll k = yf - ya;
    ll k1 = xf - xa;
   
   
    ll d1 = dist(xa, ya, xf, yf);
    ll d2 = dist(xb, yb, xf, yf);
   // ll d3 = dist(xa, ya, xb, yb);

  
    ll ans = d;
    if (xa == xb && xa == xf && yf < max(ya, yb) && yf > min(ya, yb))
    {
        ans += 2;
    }
    else if (ya == yb && ya== yf && xf< max(xa, xb) && xf > min(xa, xb))
    {
        ans += 2;
    }
    else{
        if (d1 + d2 == d&&(int)k/m==k1)
        //cout << d+ 2<<"\n";
        ans += 2;
       // else
         //   cout << d << "\n";
    }

    cout << ans << "\n";*/
}
int main()
{
 NeedForSpeed;
 ll t;
 cin >> t;
 for(int it=1;it<=t;it++) {
     //cout << "Case #" << it+1 << ": ";
     solve();
 }
 return 0;
}