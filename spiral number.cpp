//search for RAXVAB once
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define li long int
#define fi first
#define se second
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
    int t;cin>>t;
    while(t--)
    {
    long long x,y,f=0;cin>>x>>y;
	if(x==y)
	f=(x*x)-(x-1);
	else 
	{if(x>y)	
	{
	if(x&1)
	f=(x-1)*(x-1)+y;
		else
	f=(x)*(x)-y+1;
	}
	else
	{
	if(y&1)
	f=(y)*(y)-x+1;
		else
		f=(y-1)*(y-1)+x;
	
	}
		
		}	
    	
    	cout<<f<<"\n";
    	
	}


}

    
    
