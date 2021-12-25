#include<bits/stdc++.h> 
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        ll a[n];
        ll b[n];
        for (ll i = 0; i < n;i++)
            {cin >> a[i];
                b[i] = a[i];
            }
            ll sum = 0;
            sort(b, b + n);
            if(b[n-1]!=b[0]){
            for (ll i = 0; i < n; i++)
            {
                if (b[0] == a[i])
                    sum += i;
                if (b[n - 1] == a[i])
                    sum += (n-1)- i;
                }
                ll c = n * (n - 1);
                c /= 2;
                c -= 1;
               // cout << c;
                if(c>=sum)
                cout <<"YES\n";
                else
                {
                    cout << "NO\n";
                }}
                else
                {
                    cout << "YES\n";
                }
                
                
    }}