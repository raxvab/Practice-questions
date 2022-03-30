
//search for RAXVAB once
#include <bits/stdc++.h>
using namespace std;/*
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
#define rev(i, n) for (ll i = n; i >= 0; i--)*/
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"

#include <bits/stdc++.h>
using namespace std;

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
        int count = 0;
        for (int i = 0; i < n;i++)
          {  cin >> a[i];
if(a[i]==1)
    count++;
//int ind1, ind2,c==0;
          }
          int ind1, ind2, c = 0;
          for (int i = 0; i < n; i++)
          {
          
             if(a[i]== 1 && c==0)
                ind1 = i + 1;
             if (a[i] == 1)
                 c++;
             if (a[i] == 1 && c == count)
                 ind2 = i + 1;}
          int ans = ind2-ind1-count+1;
          //  unsigned int ans = (ind2 - ind1);
          //-count;
          cout << ans << "\n";}}