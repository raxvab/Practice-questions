
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

#include <bits/stdc++.h>
using namespace std;



int main()
{
    speed;

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll m = min(a, b);
       
       
       
     
        for (ll i = m; i >= 1; i--)
        {
            if ((i & (i - 1)) == 0)
            {
                m = i;
                break;
            }
        }
        ll ans = (a ^ m) + (b ^ m);
        cout << ans << endl;

    }
}

/*
#include <bits/stdc++.h> 
#include <cmath> 
using namespace std; 
#define ll long long


void findX(ll arr[], int n) 
{ 

ll* itr = max_element(arr, arr + n); 

ll p = log2(*itr) + 1; 

ll X = 0; 
	for (ll i = 0; i < p; i++) { 
	ll count = 0; 
		for (ll j = 0; j < n; j++) { 


			if (arr[j] & (1 << i)) { 
				count++; 
			} 
		} 


		if (count > (n / 2)) { 

	
			X += 1 << i; 
		} 
	} 


ll sum = 0; 
	for (ll i = 0; i < n; i++) 
		sum += (X ^ arr[i]); 


	cout<< sum<<"\n"; 
} 

int main() 
{ 
	ll t;cin>>t;
	while(t--)
	{
ll arr[2];
cin>>arr[0]>>arr[1];
	int n = sizeof(arr) / sizeof(arr[0]); 

	findX(arr, n); 
}
	return 0; 
} 
*/