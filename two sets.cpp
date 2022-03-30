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
#define rev(i, n) for (ll i = n; i >= 1; i--)
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}
int main()
{
/*
   speed;
   ll n;cin>>n;vector< pair <int, int> > v;
   ll j=1,k=n;
     for (int i=1; i<=n/2; i++) 
     {
	 
        v.pb( mp(j++,k--) ); 
    }
    
   
    cout << "The vector before sort operation is:\n" ; 
    for (int i=0; i<n; i++) 
    { 
        // "first" and "second" are used to access 
        // 1st and 2nd element of pair respectively 
        cout << v[i].first << " "
             << v[i].second << endl; 
  
    } 
   sort(v.begin(), v.end(), sortbysec); 
  
    // Printing the sorted vector(after using sort()) 
    cout << "The vector after sort operation is:\n" ; 
    for (int i=0; i<n; i++) 
    { 
        // "first" and "second" are used to access 
        // 1st and 2nd element of pair respectively 
        cout << vect[i].first << " "
             << vect[i].second << endl; 
    } 
   
   */
   
   ll n;cin>>n;ll s=0,s2=0;
   ve v;
   ve v2;
   rev(i,n)
   {
   	if(s<=s2)
   	{
   		s+=i;
   		v.pb(i);
	   }else
	   {
	   	s2+=i;
	   	v2.pb(i);
	   }
   }
   if(s==s2)
   {
   	cout<<"YES\n";
   	cout<<v.size()<<endl;
   	for(ll i=0;i<v.size();i++)
   	cout<<v[i]<<" ";
   	cout<<endl;
   	cout<<v2.size()<<endl;
   for(ll i=0;i<v2.size();i++)
   	cout<<v2[i]<<" ";
   }
   else 
   cout<<"NO\n";
   
   }

