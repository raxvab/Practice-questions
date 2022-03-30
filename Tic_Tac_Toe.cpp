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
 
char check(char a[],char b[],char c[])
{ int x=0,o=0;
   
    if((a[0]==a[1])&&(a[1]==a[2]))
    {
        if(a[2]=='O')
      o++;
       if(a[2]=='X')
      x++;

    }
    if((b[0]==b[1])&&(b[1]==b[2]))
    {
       if(b[2]=='O')
       o++;
       if(b[2]=='X')
       x++;
    }
    if((c[0]==c[1])&&(c[1]==c[2]))
    {
       if(c[2]=='O')
       o++;
       if(c[2]=='X')
      x++;
    }
    if((a[0]==b[1])&&(b[1]==c[2]))
    {
        if(c[2]=='O')
       o++;
       if(c[2]=='X')
      x++;
    }
    if((c[0]==b[1])&&(b[1]==a[2]))
    {
      if(a[2]=='O')
     o++;
       if(a[2]=='X')
      x++;
    }
    for(int i=0;i<3;i++)
    {
        if((a[i]==b[i])&&(b[i]==c[i])&&(c[i]=='O'))
           {
                if(c[i]=='O')
       o++;
       if(c[i]=='X')
    x++;
           }
    }
if(x>0)
return 'X';
else if(o>0)
return 'O';
else
 return 'D';
}

void solve(){
 ll i,j,n,d,m,k,sum=0,ans=0,cnt=0,r=0,e=0,x=0,y=0,und=0;
 char a[3],b[3],c[3];
 for(int i=0;i<3;i++)
{ 
cin>>a[i];
if(a[i]=='X')
x++;
if(a[i]=='O')
y++;

}

for(int i=0;i<3;i++)
{ 
cin>>b[i];
if(b[i]=='X')
x++;
if(b[i]=='O')
y++;

}

for(int i=0;i<3;i++)
{ 
cin>>c[i];
if(c[i]=='X')
x++;
if(c[i]=='O')
y++;

}

char chec=check(a,b,c);
d=abs(x-y);
sum=x+y;
//cout<<chec<<ln<<sum<<ln<<d<<ln;

if((chec=='X'&&chec=='O')||(chec=='X'&&d==0)||(chec=='O'&&d==1))
cout<<3<<ln;
 else if(chec=='X'||chec=='Y'||(chec=='D')&&(sum==9))
 cout<<1<<ln;
 else if(chec=='D'&&sum<9)
 cout<<2<<ln;

 

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
