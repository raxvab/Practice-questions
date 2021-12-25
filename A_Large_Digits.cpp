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

    int a, b;
    cin >> a >> b;
    int r = 0,c=0;
    int s = 0;
    while (a)
    {
        s += a % 10;

        a /= 10;
      }
      int s1 = 0;
      while (b)
      {
          s1 += b % 10;

          b /= 10;
      }
      cout << max(s, s1);
}