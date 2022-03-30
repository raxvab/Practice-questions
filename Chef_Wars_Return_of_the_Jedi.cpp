#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ll t;cin>>t;while(t--)
{
ll h,c;
cin>>h>>c;/*
while(c>=0)
{
h-=c;
c=floor(c/2);
if(h==0||c==0)
break;
}
if(h>c)
cout<<0<<"\n";
else
cout<<1<<"\n";
*/
if(h/2>=c)
cout<<0<<"\n";
else
cout<<1<<"\n";

}
}