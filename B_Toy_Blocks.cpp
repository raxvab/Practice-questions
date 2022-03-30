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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int s = 0, c = 0, mx = -1, ans = 0;
        for (int i = 0; i < n; i++)
        {
            s += a[i];
            mx = max(mx, a[i]);
            if (a[i] == 0)
                c++;
        }
        if (c != 0)
            ans = abs(mx * n - s);
        //else if(s%2==0||s%3==0) ans = 0;
        else
        {
            ans = mx * n - s;
            if (ans % mx == 0)
                ans = 0;
            else
            {
                s = s - mx;
                ans = s - mx;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
