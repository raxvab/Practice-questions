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



int main()
{
 ios_base::sync_with_stdio(0);cin.tie(0);
 int t;
 cin>>t;
 while(t--)
 {
    ll n,x;
    cin>>n>>x;
    vector<ll> m(n);
    for(ll& i:m)
    cin>>i;
    sort(m.begin(),m.end());
   //  vector<ll>::iterator it = lower_bound(m.begin(), m.end(), x);

    ll index = it - m.begin();
   ll count=0;
    for(ll i=index;i<n;i++)
    {
    	if(x<m[i])
    	{
    		while(x<m[i])
    		{
    			x=2*x;
    			count++;
    		}
    		count++;
    	}
    	else
    	count++;
    	x=2*m[i];
    }
   ll tot=count+index;
    if(index!=0)
    {
    	count=0;
    	index--;
    	for(int i=index;i<n;i++)
    	{
    		if(x<m[i])
    		{
    			while(x<m[i])
    			{
    				x*=2;
    				count++;
    			}
    			count++;
    		}
    		else
    		count++;
    		x=2*m[i];
    	}
    	count+=index;
    ll act=min(count,tot);
    	cout<<act<<"\n";
    }
    else
    cout<<tot<<"\n";
 }
}