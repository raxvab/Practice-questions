#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x;
        int b[200009], c[200009];
        memset(c, 0, sizeof(c));
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            c[b[i]]++;
        }
        int m = INT_MAX;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (c[b[i]] == 1 && m > b[i])
            {
                m = b[i];
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }
}