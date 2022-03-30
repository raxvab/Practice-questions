
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
    ll n;cin>>n;
    ll a[n];
  rep(i,n)
    cin>>a[i];
ll i=0,j=n-1;
    string r;
  
   ll c=0;
	while(i<=j)
	{
		if(c<a[i]&&(a[i]<=a[j]||c>a[j]))
		{
			c=a[i];
			r+="L";
			i++;
		}
		else if(c<a[j]&&(a[j]<=a[i]||c>a[i]))
		{
			c=a[j];
			r+="R";
			j--;
		}
		else 
		    break;
	} 
    cout<<r.length()<<"\n";
    cout<<r;
    return 0;
}




