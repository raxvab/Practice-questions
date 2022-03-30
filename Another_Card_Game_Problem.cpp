#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int

int main()
{
ll t;cin>>t;while(t--)
{
ll c,m;cin>>c>>m;

if(m%9==0||c%9==0)
{c=c/9;
m=m/9;
if(c<m)
cout<<0<<" "<<c<<"\n";
else
cout<<1<<" "<<m<<"\n";

}
else
{
    c=c/9;
m=m/9;
if(c<m)
cout<<0<<" "<<c+1<<"\n";
else
cout<<1<<" "<<m+1<<"\n";
}

}
}