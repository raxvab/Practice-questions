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

    //speed;
   li t;
    cin >> t;
    li a[t],b[100005]={0};
    rep(i,t)
    {cin>>a[i];
        b[a[i]]++;
    }
    li c[t], d[100005] = {0};
    rep(i, t+1)
    {
        cin >> c[i];
        d[c[i]]++;
    }
    for (long int i = 1; i < t + 1;i++)
    {
        if(b[i]!=d[i])
            {cout <<"\n"<<c[i];
                break;}

    }

}