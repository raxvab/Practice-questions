#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'U')
            c1++;
        if (s[i] == 'D')
            c2++;
        if (s[i] == 'R')
            c3++;
        if (s[i] == 'L')
            c4++;
    }
    if (c1 == c2 && c3 == c4)
        cout << "true\n";
    else
        cout << "false\n";
    return 0;
}
