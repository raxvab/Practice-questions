#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
   
        int n; cin >> n;
        int p[n]; int ans = 0;
        for(int i=0; i<n; i++){  
            cin >> p[i];
            ans = ans ^ p[i];
        }





        int x[n+1] = {0};
        for(int i=1; i<=n; i++)
            x[i] = i ^ x[i-1];


        
        for(int i=2; i<=n; i++){
            if((n / i) & 1){
                int k = n % i;
                ans = ans ^ x[i-1] ^ x[k];
            }
            else{
                int k = n % i;
                ans = ans ^ x[k];
            }
        }
        
        cout << ans << endl;
    
}