//search for RAXVAB once
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define li long int
#define fi first
#define se second
#define ve vector<ll>
#define mp make_pair
#define pr pair<ll, ll>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repji(j, i, n) for (ll j = i; j < n; j++)
#define rev(i, n) for (ll i = n; i >= 0; i--)
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}



int main()
{

    speed;
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2,s,m;
        cin >> s1 >> s2;
        int l1 = s1.length(), l2 = s2.length();
        int p = (l1 * l2) / gcd(l1, l2);
        s= s1;
        m= s2;
        for (int i = 1; i < p / l1; i++)
        {
            s1 += s;
}

for (int i = 1; i < p / l2;i++)
{
    s2 += m;
              
            }
       
       //  cout << s1 << "\n" << s2;
            if (s2 == s1)
                cout << s1 << endl;
                else
                {
                    cout << -1 << endl;
                }
                
        }
        return 0;
}
    