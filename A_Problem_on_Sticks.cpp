#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define sr insert
int main()
{
    ll t;
    //cin >> t;
    while (cin>>t)
    {
        ll n,x,z;
        cin >> n;
        z = 0;
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 0)
                z = 1;
            s.insert(x);
        }
        cout << s.size() - z << "\n";
    }
}