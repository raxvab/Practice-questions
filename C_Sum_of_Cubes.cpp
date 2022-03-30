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
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 bool check(ll N)
 {
bool f = false;
     for (ll i = 1; i * i*i <= N; i++)
     {
        ll cb = i * i * i;

  ll d = N - cb;

         ll cd = cbrt(d);

         if (cd * cd * cd== d && d != 0)
         {
             f = true;
             break;
         }
     }
     return f;
 }

void solve(){
    ll n;
    cin >> n;
   

    bool x = false;
    for (ll i = 1; i * i * i <= n; i++)
    {
        ll cb = i * i * i;

        ll d = n - cb;

        ll cd = cbrt(d);

        if (cd * cd * cd == d && d != 0)
        {
            x = true;
            break;
        }
    }
    if (x)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{

 fast_cin();
 ll t;
 cin >> t;
 for(int it=1;it<=t;it++) {
    
     solve();
 }
 return 0;
}
       /* for ( i = 1; i*i <= N; i++)
        {
            long long cb = i * i * i;

            long long diff = N - cb;

            long long cbrtDiff = cbrt(diff);

            if (cbrtDiff * cbrtDiff * cbrtDiff == diff && diff != 0)
            {
                f = true;
                break;
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";*/
