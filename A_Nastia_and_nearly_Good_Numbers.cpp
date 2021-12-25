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
 

void solve(){
 ll i=2,j,n,a,b,c,d,m,k=0,sum=0,ans=0,cnt=0,r=0,e=0,x,y,z;
cin>>a>>b;
x=a;
z=a*b;
/*
while(!k)
{
if((z-x)%a==0&&(z-x)%b!=0)
k++;
z*=i;
i++;
}

if(b==1||b==a||a%b==0)
cout<<"NO\n";
else
cout<<"YES\n"<<x<<" "<<z-x<<" "<<z<<ln;
*/
if(b>2){    y=a*(b-1);
			cout<<"YES\n"<<x<<" "<<y<<" "<<z<<ln;
            return;
		}
else if(B==2){
			
			y=a*3;
			z=a*4;
			cout<<"YES\n"<<x<<" "<<y<<" "<<z<<ln;
		}
		else{
			cout<<"NO\n";
		}

        /* cout<<n-1<<endl;
    k=m=1e9+7;
    for(i=1;i<n;i++)
    {
        j=min(a[i],a[i-1]);
        cout<<i<<" "<<i+1<<" ";
        a[i-1]=k;
        a[i]=j;
        cout<<k<<" "<<j<<endl;
        if(k==m)
        k=1e9+13;
        else
        k=m;*/



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