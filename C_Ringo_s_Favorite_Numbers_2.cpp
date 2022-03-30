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
#define yep cout<<"YESn";
 
void solve1()
{
    ll n;
cin>>n;
ll a[n];
ll count=0;
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll p,ans=0;
for(ll i=0;i<n;i++){
    a[i]=a[i]%200;
}
sort(a,a+n);
for(ll i=0;i<n;i++){
    if(a[i]==a[i+1]){
        count++;
    }
    else{
        ans+=(count*(count+1))/2;
        count=0;
    }
      
}
cout<<ans;
}

void solve(){
 ll i,j,n,c,d,m,k,sum=0,ans=0,cnt=0,r=0,e=0,x,y;
cin>>n;
map<ll,ll> mp;
ll a[n];
forn(i,n)
{
cin>>a[i];
a[i]%=200;
mp[a[i]]++;
}
sort(a,a+n);
/*
for(i=0;i<n;i++)
{//cout<<a[i]<<ln;
    if(a[i]==a[i+1])
    cnt++;
    else
    { //cout<<cnt<<" ";
        sum+=(cnt*(cnt+1))/2;
        cnt=0;
    }
    
 
}
cout<<sum<<ln;
*/
for(auto i:mp)
{
    cnt=i.se;
    
    //cout<<cnt<<" ";
    cnt--;
    ans+=(cnt*(cnt+1))/2;
   
}
cout<<ans;

}
int main()
{
 fast_cin();
 
     solve();

 return 0;
}