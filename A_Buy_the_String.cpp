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
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"

    int main()
{
    speed;
    int t;
    cin >> t;while(t--)
    {
        int n, a, b,h,cost=0;
        string s;
        cin >> n >> a >> b >> h >> s;
        rep(i,n)
        {
if(s[i]=='1')
    cost += min(h + a, b);
    else
    {
        cost += min(h + b, a);
    }
   }
   cout << cost << endl;/*
   if (a == b)
       cout << s.length() * a << endl;
   else
   {
       // int ar[n];
       int o = 0, z = 0;
       rep(i, n)
       {
           //  ar[i] = (int)s[i];
           if (s[i] == '0')
               z++;
           else
               o++;
       }
       int ans = (a * z) + (b * o);
       int ans1 = 0;
       if (z >= o && a >= b)
       {
           ans1 = (z * h) + b * (z + o);
           //cout << ans << " " << ans1 << endl;
           cout << min(ans, ans1) << endl;
            continue;
        }
        else
        {
            ans1 = (o * h) + a * (o + z);
           // cout << ans << " " << ans1 << endl;
           cout << min(ans, ans1) << endl;
            continue;

        }
        
        
        
        
        
        }*/
      




    }
        }