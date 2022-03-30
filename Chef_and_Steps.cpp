#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
#define pdd pair<long long int, long long int> 



int main()
{ios_base::sync_with_stdio(0);cin.tie(0);
    
int t;cin>>t;
while(t--)
{
    string s;
ll n,s1;cin>>n>>s1;
ll a[n];
for(ll i=0;i<n;i++)
{cin>>a[i];
if(a[i]%s1==0)
s.push_back('1');
else
{
 s.push_back('0');
}
}
cout<<s;
}



}
