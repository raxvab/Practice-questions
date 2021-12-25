#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int j = n;


           for (int i = 0; i < n;i++)
               a[i] = i + 1;
           sort(a, a + n);
           for (int i = 0; i < n;i++)
           {
               if(a[i]==i+1)
               {
                   cout << a[i + 1] << " " << a[i]<<" ";
                   continue;
           }
           }
               cout << "\n";
    
}}