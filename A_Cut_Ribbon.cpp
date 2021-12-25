#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long int 
#define pb push_back
#define mp make_pair
#define FOR(x,val,to) for(int x=(val);x<int((to));++x)
#define umap unordered_map
#define uset unordered_set

ll DP[100005];
ll a,b,c;
ll solve(ll n)
{
if(n == 0) 
return 0;
if(n < 0) 
return -1;
if(DP[n] != 0) 
return DP[n];
ll x = max(1+solve(n-a),max(1+solve(n-b),1+solve(n-c)));
if(x==0)
DP[n]=-1;
else
{
    DP[n]=x;
}
return DP[n];
  /*   if(DP[n]==0)
     DP[n]=-1;
    return DP[n];*/
}
int main()
{
ll n;cin>>n>>a>>b>>c;
/*FOR(i,0,100005)
DP[i]=-1;
*/ll an=solve(n);
cout<<an<<"\n";
}