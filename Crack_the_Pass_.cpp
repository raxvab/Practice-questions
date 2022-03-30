#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l;
        cin >> l;
            int i = 0, c=0,x=l;
           while(x--)
            {
                i=(i * 10) + 1;
            }
            x = l;
            while (x--)
            {
                c=(c * 10) + 9;
            }

            cout << i << c;
            while (i <= c)
            {
                int g = i, m = 0;
                while (g)
                {
                    if (g % 10 != 0)
                    {
                        g /= 10;
                        continue;
                    }
                    else
                    {
                        m = 1;
                        break;
                    }
                    g /= 10;
                }
                if (m == 0)
                    cout << i<<"\n";
                    
                    i++;
                }
   
    }

    return 0;
}