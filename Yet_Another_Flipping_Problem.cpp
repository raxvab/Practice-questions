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
 ll n,k;
    cin>>n>>k;
int ans=1;
    ll v=0;
    if(k==0){
        cout<<"YES"<<endl;
        cout<<0<<"\n";
        return;
    }
    if(k%2==0){
        cout<<"NO"<<endl;;
        return;
    }
    rforn(i,31){
        if(((1<<i)&k)!=0){
            v=i+1;
            break;
        }
    }
    k=(k+(1<<v)-1);
    k/=2;
    cout<<"YES"<<endl;
    cout<<v<<"\n";
vector<int> a;
    for(int i=v-2;i>=0;i--){
        if(((1<<i)&k)!=0){
            a.push_back(ans);
            ans+=(1<<i);
        }
        else{
            ans-=(1<<i);
            a.push_back(ans);
        }
    }
    rforn(i,v-2)
        cout<<a[i]<<"\n";
    cout<<ans<<"\n";


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