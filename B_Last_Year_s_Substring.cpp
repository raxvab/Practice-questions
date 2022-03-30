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
int main()
{

    speed;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
       int a[n];
        string s;
        cin >> s;

        rep(i, n)
        {
        a[i]=(int)(s[i]-48);
        }
        if (a[0] == 2 && a[1] == 0 && a[2] == 2 && a[3] == 0)
        {
            cout << "YES\n";
            continue;
        }
        else if (a[n-1] == 0&& a[n-2] == 2 && a[n-3] == 0 && a[n-4] == 2)
        {
            cout << "YES\n";
            continue;
        }
        else if(a[0]==2&&a[1]==0&&a[n-2]==2&&a[n-1]==0)
        {
            cout << "YES\n";
            continue;
        }
        else if (a[0] == 2 && a[n-3] == 0 && a[n - 2] == 2 && a[n - 1] == 0)
        {
            cout << "YES\n";
            continue;
        }
        else if (a[0] == 2 && a[1] == 0 && a[2] == 2 && a[n - 1] == 0)
        {
            cout << "YES\n";
            continue;
        }
       /* else if (a[0] == 2 && a[n - 1] == 0 && a[n - 2] == 2)
        {
            int  c2 = 0;
            rep(i, n)
            {
               
                if (a[i] == 0)
                    c2++;
           }
           if(c2>=1)
               {cout << "YES\n";
           continue;}
        }*/
        else
        {
            cout << "NO\n";
            continue;
        }
    }}