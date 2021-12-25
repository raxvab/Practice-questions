#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,max,min,temp,mi=0,mii=0,r,i=0,c=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  r=n/2;
  max=a[0];
  min=INT_MAX;
  for(i=1;i<n;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
      mi=i;
    }
  }
  for(i=n-1;i>=0;i--)
  {
    if(a[i]<min)
    {
      min=a[i];
      mii=i;
    }  
  }
  if((mii>=r)||(mi<=r))
   cout<<mi+(n-1-mii);
  else
   cout<<mi+(n-1-mii)-1;
}