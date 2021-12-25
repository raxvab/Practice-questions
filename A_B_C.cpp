#include<bits/stdc++.h>
using namespace std;
int main()
{/*
    int t;
    cin >> t;

    while(t--){
  long long int a, b,j=0,i=0;
        long long int count = 0;
        cin >> a >> b;
        for (i = b; i >= a;i--)
        {
            for (j = i-1; j >= a; j--)
           { if((i-j)>=a)
                count++;
        }
        }
        cout << count << "\n";
*/
    long t;
    cin >> t;
    vector<long> l(t);
    vector<long> r(t);
    for (long i = 0; i < t; i++)
    {
        cin >> l[i] >> r[i];
        if (2 * l[i] - r[i] <= 0)
        {
            long c = r[i] - 2 * l[i] + 1;
            cout << (c * (c + 1) / 2) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
