#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {

        int len, k;
        cin >> len >> k;
        string s = "";
        for (int i = 0; i < k; i++)
        {
            s.push_back('a');
        }
        for (int i = k; i < len; i++)
        {
            if (s[i - 1] == 'a')
                s.push_back('b');
            else if (s[i - 1] == 'b')
                s.push_back('c');
            else if (s[i - 1] == 'c')
                s.push_back('a');
        }
        cout << s << "\n";
    }
}