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
 ll i,j,n,a,b,c1=0,c2=0,d,m,k,sum=0,ans=0,cnt=0,r=0,e=0,x,y;
string s,s1,s2;
cin>>n>>s;


forn(i,n)
{if(i%2==0)
s1+='1';
else
s1+='0';
    
}

forn(i,n)
{if(i%2==0)
s2+='0';
else
s2+='1';
    
}
forn(i,n)
{
    if(s1[i]==s[i])
    continue;
    if(s1[i]!=s[i])
    {
if(s1[i+1]!=s[i+1])
continue;
else c1++;
    }
    
}forn(i,n)
{
    if(s2[i]==s[i])
    continue;
    if(s2[i]!=s[i])
    {
if(s2[i+1]!=s[i+1])
continue;
else c2++;
    }
    
}
if(c1==0||c2==0)
{
    cout<<"Uttu\n";return;
} //c1 or ç2 is zero 
// Jj loss
// Else if c1 or c2 is odd
// Jj wins
// Else
// Jj loss
if((c1&1||c2&1)&&s!=s1&&s!=s2)
cout<<"JJ"<<"\n";
else
cout<<"Uttu"<<"\n";
//cout<<s<<"\n"<<s1<<"\n"<<s2;

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

