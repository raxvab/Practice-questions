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
  
  
		long long int f,x;
		x=0;
		int j=1,m=0,c=0;
		cin>>f;
		do
		{
			m=pow(5,j);
			c=f/m;
			x=x+c;
			j++;
		}while(c!=0);
	
		cout<<x<<"\n";
		
   }

