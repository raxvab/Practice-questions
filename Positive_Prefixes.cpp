//search for RAXVAB once
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define li long int
#define ld long double
#define fi first
#define se second
#define ve vector<ll>
#define mp make_pair
#define pr pair<ll, ll>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repji(j, i, n) for (ll j = i; j < n; j++)
#define rev(i, n) for (ll i = n; i >= 0; i--)
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"

int main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
      
        rep(i, n)
        {
            (i + 1) % 2 != 0 ? a[i] = 0 - (i + 1) : a[i] = i + 1;
        } 
   if(k>n/2)
     {int c = 0;
         rev(i,n)
         {
             
             if(c<k-n/2&&a[i]<0)
                { a[i] *= (-1);
                    i--;
                    c++;
                }
         }
     }
     else
     {
         int c = 0;
         rep(i, n)
         {

             if (c <= k && a[i] > 0)
             {
                 c++;

                 
             }
          if(c>k&&a[i]>0)
             {
                 a[i] *= (-1);
             }
                 
             }
         
     }
     
     rep(i,n)
     cout<<a[i]<<" ";
     cout << endl;}}