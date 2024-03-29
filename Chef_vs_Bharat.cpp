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

ll pal(ll num)
{
    ll palin = num;
    num = num / 10;
    while (num > 0)
    {
        palin = palin * 10 + num % 10;
        num = num/10;
    } 
        return palin;
}


ll modexpo(ll base,ll power)
{
    ll mod = 1e9 + 7;
    ll res = 1;
    while (power != 0)
    {
        if (power % 2 == 0)
        {
            base = ((base % mod) * (base % mod)) % mod;
            power = power / 2;
        }
        else
        {
            res = ((res % mod) * (base % mod)) % mod;
            power = power - 1;
        }
        return res;}

void solve()
{
    ll n = 1e5 + 1;
    ll arr[n], pre[n];
    ll l, r;
    for (ll i = 1; i < n;i++)
    {
        arr[i] = pal(i);
        pre[i] = pre[i - 1] + arr[i];
 }

 ll power = pre[r] - pre[l];
 ll ans = modexpo(arr[l], power);
 cout << ans << "\n";

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