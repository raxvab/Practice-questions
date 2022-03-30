#include <bits/stdc++.h>
using namespace std;

#define ll int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,sum=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
         /*   if(a[i]>0)
                a[i] -= i + 1;
           */ sum += a[i];
        }
     /*//   cout << sum;
        if(sum>0)
        {
            int j = 0;
            for (j = 1; j <= n;j++)
            {
              //  sum -= i;
                if((sum-j)==0)
                    {
                        sum -= j;
                        //  cout << "YES\n";
                        break;

                    }
            }
            if(sum!=0)
               {// cout << "NO\n";
                   int i = 0;
                   for (i = 1; i <= n; i++)
                   {
                       sum -= i;
                       if (sum == 0)
                       {
                          // cout << "YES\n";
                           break;
                       }
                   }
           }}
      */     if (sum<0)
               cout << "NO\n";
             else
            {
                cout << "YES\n";
            }
            
    }}