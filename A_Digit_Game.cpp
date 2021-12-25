#include <iostream>
using namespace std;
int main()
{
    int t, n, d, i;
    string s;
    cin >> t;
    while (t > 0)
    {
        cin >> n >> s;
        if (n % 2 == 0)
        {
            for (i = 1; i < n; i = i + 2)
            {
                d = s.at(i) - '0';
                if (d % 2 == 0)
                    break;
            }
            if (i < n)
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }
        else
        {
            for (i = 0; i < n; i = i + 2)
            {
                d = s.at(i) - '0';
                if (d % 2 != 0)
                    break;
            }
            if (i < n)
                cout << "1" << endl;
            else
                cout << "2" << endl;
        }
        t--;
    }
    return 0;
}