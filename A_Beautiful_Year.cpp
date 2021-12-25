#include <iostream>
#include <string>
using namespace std;
int main()
{
   /* int n{}, i{}, j{}, temp{}, a[4], c{};
    cin >> n;
    do
    {
        c = 0;
        n++;
        temp = n;
        for (i = 0; i < 4; i++)
        {
            a[i] = temp % 10;
            temp /= 10;
        }
        for (i = 0; i < 4; i++)
        {
            for (j = i + 1; j < 4; j++)
            {
                if (a[i] == a[j])
                {
                    c++;
                }
                else
                {
                    continue;
                }
            }
        }
    } while (c != 0);
    cout << n;
    return 0;
*/
   int t;
   cin >> t;
   int a = 5, b = 8;
   int c = a++ - b--;
   cout << c<<"\n";
   t = ++a + --b;
   cout << t << "\n";
   int d = --a - b++;
   cout << d << "\n";
   a = a-- + ++b;
   cout << a << "\n";

}
