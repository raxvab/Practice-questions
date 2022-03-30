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
int main()
{
speed;
li n,q,t,a,b;
string s;
cin>>n;
cin>>s;
cin>>q;
/*string m;
string n1;
*/
for(li i=0;i<q;i++)
{
cin>>t>>a>>b;
if(t==1)
{
    swap(s[a-1],s[b-1]);

}
else
{
  //  m.erase();n1.erase();
  /*  for(li i=0;i<2*n;i++)
{
    if(i<n)
    {*/
  //string s1 = s;
  s = s.substr(n, 2 * n) + s.substr(0, n);
  /*   }

}*/

  //s=n1+m;

}

}
cout<<s;//<<"\n"<<m<<"\n"<<n1;

return 0;
}