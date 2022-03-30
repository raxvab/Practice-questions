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
#define int long long
typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define NeedForSpeed                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
const int N = 1e6;
int a[N], f[N], b[N];
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    int ans = 0;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n + 1);
    f[1] = a[1];
    b[n] = a[n];
    for (int i = n - 1; i > 0; i--)
    {
        b[i] = __gcd(b[i + 1], a[i]);
    }
    for (int i = 2; i < n + 1; i++)
    {
        f[i] = __gcd(f[i - 1], a[i]);
    }
    for (int i = 1; i < n + 1; i++)
    {
        sum += a[i];
    }
    int mn = LLONG_MAX;
    for (int i = 1; i < n + 1; i++)
    {
        ans = (sum - a[i] + __gcd(f[i - 1], b[i + 1])) / __gcd(f[i - 1], b[i + 1]);
        if (ans < mn)
            mn = ans;
    }
    cout << mn << "\n";
}
int main()
{
    NeedForSpeed;
    ll t;
    cin >> t;
    for (ll it = 1; it <= t; it++)
    {
        //cout << "Case #" << it+1 << ": ";
        solve();
    }
    return 0;
}