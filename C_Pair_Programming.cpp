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
void solve(){

    int k, n, m;
    cin >> k >> n >> m;
    int A[n], B[m], C[n + m];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < m; i++)
        cin >> B[i];
    int i = 0, j = 0, x = 0;
    int first = 0, second = 0;
    while ((i < n) || (j < m))
    {
        if (!A[i] && i < n)
        {
            C[x] = A[i];
            x++;
            i++;
            k++;
        }
        else if (A[i] <= k && i < n)
        {
            C[x] = A[i];
            x++;
            i++;
        }
        else
            first = 1;

        if (!B[j] && j < m)
        {
            C[x] = B[j];
            x++;
            j++;
            k++;
        }
        else if (B[j] <= k && j < m)
        {
            C[x] = B[j];
            x++;
            j++;
        }
        else
            second = 1;

        if (first && second)
            break;
        first = 0;
        second = 0;
    }
    if (first && second)
        cout << "-1" << endl;
    else
    {
        for (int i = 0; i < (n + m); i++)
            cout << C[i] << " ";
        cout << endl;
    }
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