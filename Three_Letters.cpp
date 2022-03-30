#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        int a[26] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            a[s[i] - 'a']++;
           /* if (a[s[i] - 'a'] == 2)
                count++;
        */}
        int x = 0,ans=0;
        for (int i = 0; i < 26; i++)
        if(a[i]==1)
            x++;
            for (int i = 0; i < 26; i++)
            {

                if (a[i] % 2 == 0 &&x>(a[i]/2))
                    {ans+= a[i] / 2;
                x -= a[i] / 2;
            }
            else if (a[i] % 2 == 0 )
            {
                ans += a[i] / 3;
            }
            else
            {
                if(a[i]>2)
                

            }
            
            
            
            
            
            
            }
            cout <<ans << "\n";
    }
    return 0;
}
