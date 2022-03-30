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
  int n;
    cin>>n;long long j=4,x=3,y=2,m=2;
    for(int i=1;i<=n;i++)
    {
        
        if(i==1)
            cout<<0<<"\n";
        else if(i==2)
            cout<<6<<"\n";
			else
        {
           /* int p=i*i;
            int j=i-2,k=p*(p-1)/2;
            k-=8*j*(j+1)/2;
            cout<<k<<"\n";*/
           // cout<<x<<" "<<y<<"\n";
            x+=j;
         y+=m;
         j++;m+=2;
         cout<<x*y<<"\n";        
        
    }}
    

}

    
    
