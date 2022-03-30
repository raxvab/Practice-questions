#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{

int t;cin>>t;while(t--)
{
int n;cin>>n;
ll a[n];

for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
ll s1=0,s2=0;


for(int i=0;i<n;i++)
{
    if(i==0)
    {
        s1+=a[i];
       
    }
    else if(i==1)
    {
        
        s2+=a[i];
        
    }
    else if(i==2)
    s2+=a[i];
    else
    {
        if(i%2)
        s1+=a[i];
        else
        {
            s2+=a[i];
        }
        
    }
    
}

if(s1==s2)
cout<<"draw\n";
else if(s1<s2)
{
    cout<<"second\n";
}
else
{
    cout<<"first\n";
}
//cout<<" "<<s1<<" "<<s2;

}
}