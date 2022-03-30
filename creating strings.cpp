//search for RAXVAB once
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define li long int
#define fi first
#define se second
#define ve vector<ll>
#define mp make_pair
#define pr pair<ll,ll>
#define rep(i,n) for(ll i=0;i<n;i++)
#define repji(j,i,n) for(ll j=i;j<n;j++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"
 
set<string> se;
string a;

void permute(int l, int r)  
{  
    // Base case  
    if (l == r)  
        se.insert(a); 
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}  
 
signed main()
{
	speed;
	//string s;
	cin>>a;
	permute(0, (int)a.size()-1);
	cout<<(int)se.size()<<"\n";
	for(string s : se)
		cout<<s<<"\n";
 
 
	return 0;	
}












	
