
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
        int b[n];
        vector<int> v;
        map<int, int> m;
        set<int, greater<int>> s;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            s.insert(b[i]);

            m[b[i]]++;
      
        }
        int min = 100005;
        int max = 0;
        for (i = s.begin(); i != s.end();++i)
            {min > m[*i] ? min = *i : min += 1 - 1;
                max<m[*i] ? max = *i : max += 1 - 1;
