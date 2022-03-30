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
 

void solve(){

    ll n,ans=0;
    cin >> n;
 //   ll c = n % 4;
    if(n==1)
        cout << 20;
        else if(n==2)
            cout << 36;
            else if(n==3)
                cout << 51;
                else if(n==4)
                    cout << 60;
                    else if(n==5)
                        cout << 76;
                        else if(n==6)
                            cout << 88;
                            else if(n==7)
                                cout << 99;
                                else if(n==8)
                                    cout << 104;
                                    else
                                    {
if(n%4==0)
{
    ans = 44 * ((n/4) - 1);
    ans += 60;
}
else if(n%4==1)
{
    ans = 44 * (n / 4);
    ans += 32;
}
else if(n%4==2)
{
    ans = 44 * (n / 4);
    ans += 44;
}
else
{
    ans = 44 * (n / 4);
    ans += 55;
}
cout << ans;
                                    }
                                    cout << "\n";
}
int main()
{
 fast_cin();
 ll t;
 cin >> t;
 for(int it=1;it<=t;it++) {
     //cout << "Case #" << it+1 << ": ";
     solve();
 }
 return 0;
}