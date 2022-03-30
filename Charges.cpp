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
#define yep cout<<"YESn";
 

void solve(){
 //ll i,j,n,a,b,c,d,m,k,sum=0,ans=0,cnt=0,r=0,e=0,x,y;
 ll n, k, x, sum = 0;
 string s;
 cin >> n >> k;
 cin >> s;
 forn(i, s.length() - 1)
 {
     if (s[i] == '1')
     {
         if (s[i + 1] == '0')
             sum += 1;
         else
             sum += 2;
     }
     else
     {
         if (s[i + 1] == '0')
             sum += 2;
         else
             sum += 1;
     }
 }
 //cout << sum << "\n";
 while(k--)
 {
     cin >> x;
     --x;
    
   //  cout << s << "\n";
     if (x > 0)
     {
         if (s[x - 1] != s[x])
             sum += 1;
         else
             sum -= 1;
         if (x < n - 1)
         {
             if (s[x + 1] != s[x])
                 sum += 1;
             else
                 sum -= 1;
         }
     }
     if (x == 0)
     {
         if (x < n - 1)
         {
             if (s[x + 1] != s[x])
                 sum += 1;
             else
                 sum -= 1;
         }
     }
    /*
     forn(i, s.length() - 1)
     {
         if (s[i] == '1')
         {
             if (s[i + 1] == '0')
                 sum += 1;
             else
                 sum += 2;
         }
         else
         {
             if (s[i + 1] == '0')
                 sum += 2;
             else
                 sum += 1;
         }
     }
*/ s[x] == '1' ? s[x] = '0' : s[x] = '1';
    cout << sum << "\n";
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