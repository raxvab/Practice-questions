
#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
#define pdd pair<long long int, long long int> 


ll lineFromPoints(pdd P, pdd Q) 
{ 
	ll a = Q.second - P.second; 
	ll b = P.first - Q.first; 
	ll c = a*(P.first) + b*(P.second); 

return c;
} 

bool pointIsOnLine( ll c, ll x, ll y) 
{ 
    // If (x, y) satisfies the equation of the line 
    if (y == ((-1* x) + c)) 
        return true; 
  
    return false; 
} 
int main() 
{ 
ll t;cin>>t;while(t--)
{
ll n,q;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++)
cin>>arr[i];
cin>>q;
ll brr[q][2];
for(ll i=0;i<n;i++)
cin>>brr[i][0]>>brr[i][1];
ll drr[n];
for(ll i=0;i<n;i++)
{	pdd P = make_pair(arr[i], 0); 
	pdd Q = make_pair(0, arr[i]); 
	 drr[i]=lineFromPoints(P, Q); 
}

for(ll j=0;j<q;j++)
{
    for(ll i=0;i<n;i++)
    {
if (pointIsOnLine( drr[i], brr[j][0],brr[j][1] )) 
        cout << "0\n"; 
    else
        cout << "-1\n"; 
    }
}

	}	return 0; 
} 
