#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, x, y, j;
        cin >> n >> k >> x >> y;
        int flag = 0,cnt=0;
        for (int i = 0; i < n;i++)
          { x = (x + k) % n;
        if(x==y)
            {flag = 1;
                cout << "YES\n";
                break;}
          
    }
if(flag==0)
    cout << "NO\n";
    
        


    }
    }