#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define li long int
#define fi first
#define se second
#define ve vector<ll>
#define mp make_pair
#define pr pair<ll,ll>
#define rep(i,n) for(ll i=0;i<n;i++)
#define repji(j,i,n) for(ll j=i;j<n;j++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{

    int n, m;
    cin >> n >> m;
    int k = 0, f = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            if (i % 2 == 0)
            {
                cout << '#';
                f = 1;
            }
            else
            {
                if (k % 2 != 0)
                {
                    if (j != m - 1)
                    {
                        cout << '.';
                    }
                    else
                    {
                        cout << '#';
                    }
                }
                else
                {
                    if (j == 0)
                    {
                        cout << '#';
                    }
                    else
                    {
                        cout << '.';
                    }
                }
            }
        }
        if (f == 1)
        {
            k++;
            f = 0;
        }
        cout << endl;
    }

return 0;
}