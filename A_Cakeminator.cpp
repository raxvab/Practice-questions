#include <bits/stdc++.h>
using namespace std;



int main()
{
    int r,r1=0,c1=0,c;
    cin>>r>>c;
   // r1=r;
    //c1=c;
    char a[r][c]; for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    {
      cin>>a[i][j];
     
    }
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    {
      
      if(a[i][j]=='S')
r1++,c1++,i++;

    }
    int ans=(r*c)-(r1*c1);
  //  int ans=(r1*c)+(c1*r)-max(r1,c1);
    cout<<ans<<endl;
}