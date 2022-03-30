#include <iostream>
using namespace std;
#define ll long long int

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, s = 0, v = 0;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
           /* if (s < k && i > 0)
            {
                cout << i;
                break;
            }
            else
            {
                s = s + a[i];
            }*/
        }
        do{if(v<=n-1)
            s += (a[v] - k);
            else
            {
                break;
            }
            
            v++;
        } while (s >= 0);
        if(v==n&&s>=0){
if(s%k!=0)
    v += (s / k) + 1;
    else
    {
      
        v += (s / k) + 1;
    }
        }

        cout << v << "\n";
    }
}
