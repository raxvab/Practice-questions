#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
*/

    int x, y;
    cin >> x >> y;
    if(x == y)
 {       cout << 0<< " " << 6 << " " << 0;
    return 0;
}int a[7], b[7], awin = 0, bwin = 0, draw = 0;
  
        for (int i = 1; i < 7; i++)
        {
            b[i] = abs(y - i);
            a[i] = abs(x - i);

            if (a[i] == b[i] && a[i])
            {
                draw++;
                a[i] = -1;
                b[i] = -1;
            }
        }
    

    for (int i = 1; i < 7; i++)
    {

        if (a[i] < b[i] && a[i] != -1)
            awin++;
        if (a[i] > b[i] && b[i] != -1)
            bwin++;
    }
    cout << awin << " " << draw << " " << bwin << "\n";
    return 0;
}
