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
  string s;cin>>s;
 /*int a=0,c=0,g=0,t=0,m=-1;
  for(int i=0;i<s.length();i++)
  {/*if(i==0)
  continue;
  	if(s[i]=='A'&&s[i-1]=='A')
	  	{
		  a++;if(i==s.length()-1&&a==s.length()-1)
		  a++;
		  m=max(m,a);g=0;c=0;t=0;
	continue;}
  	else if(s[i]=='C')
  	{
	  c++;if(i==s.length()-1&&c==s.length()-1)
		  c++;
	  	  m=max(m,c);	a=0;g=0;t=0;
  	continue;}else if(s[i]=='G')
  {
  g++;	if(i==s.length()-1&&g==s.length()-1)
		  g++;  m=max(m,g);	a=0;c=0;t=0;
  continue;}
  	else
  {
	  	t++;if(i==s.length()-1&&t==s.length()-1)
		  t++;m=max(m,t);	a=0;g=0;c=0;
  	continue;}
  	//m=max(g,max(a,max(c,t)));
  //	a=0;g=0;c=0;t=0;
  	
  }
 */
 int m=1;vector<int >v;
for(int i=1;i<s.length();i++)
{
	if(s[i]==s[i-1])
m++;
else
{v.push_back(m);
m=1;}
	
	
}v.push_back(m);
sort(v.begin(),v.end());
m=v[v.size()-1];
 
 
  cout<<m;
  
  
  }
