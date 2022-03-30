#include <bits/stdc++.h>
using namespace std;
#define ll long long int

/*
ll fun(ll n,ll cnt)
{ ll j=cnt;
ll m,l=0;

     while(1)
   {
   m=j/n;
   j+=(m-l);
   if(m-l==0)
   break;
   l=m;
   }
   return j;//c1 ka hisab khtm yhi pr
}*/
ll c1,c2,x,y;
bool good(ll m,ll c){
    return ((m-m/c)>=c1+c2&&(m-m/x)>=c1&&(m-m/y)>=c2);
}
/*
ll solve(ll c1,ll c2,ll x,ll y)
{
ll n,m,i=0,j,k,l=0;
ll v=fun(x,c1);
ll q=x;

while(x<=v)
{
     if(x%y)
    {c2--;}
    else
    l++;
    x+=q;  
}
cout<<l<<" "<<v/y<<"\n";
l=v/y;

 j=c2+v;
 //l=j/y;
 //cout<<j<<"\n"<<l1<<"\n"<<l;
 cout<<j<<" "<<c2<<" "<<v<<"\n";
 if(c2<=0)
{return v;}
 
   while(1)
   {
   m=j/y;
   j+=(m-l);
   if(m-l==0)
   break;
   l=m;
   }
  //cout<<j<<" "<<l<<"\n";
   return j;
}

*/
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;
//cin>>t;
while(t--){
cin>>c1>>c2>>x>>y;
ll c=(x*y)/(__gcd(x,y));
ll l=0,r=1e10;


while(r>l+1){
    ll m=(l+r)/2;
    if(good(m,c))
    r=m;
    else
    l=m;
}

cout<<r<<endl;
}
return 0;
}