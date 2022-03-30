//search for RAXVAB once
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define li long int
#define fi first
#define se second
#define pop _builtin_popcount
#define ve vector<ll>
#define mp make_pair
#define pr pair<ll, ll>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repji(j, i, n) for (ll j = i; j < n; j++)
#define rev(i, n) for (ll i = n; i >= 0; i--)
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"


int main()
{

  speed;
li n;cin>>n;
li  x,i=1;
 x=1;
 while(i<=n)
 {x%=(1000000000+7);
 	x*=2;i++;
 }x%=(1000000000+7);
 cout<<x;
 
  }

