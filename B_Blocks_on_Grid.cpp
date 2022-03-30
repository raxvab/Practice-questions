#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, m = 10000, count = 0;
    cin >> r >> c;
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
            if (m > a[i][j])
            {
                m = a[i][j];
            }
        }
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]>m)
                count+= (a[i][j] - m);
        }
    cout << count;
    return 0;
}