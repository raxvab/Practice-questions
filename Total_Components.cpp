#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long int li;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define NeedForSpeed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define yep cout<<"YES\n";

//unordered_map<int, int> m;
int SieveOfEratosthenes(int n)
{
    vector<int> m(n+1, 0);
    vector<bool>
        prime(n + 1, true); //={1};
                            //  memset(prime, 1, sizeof(prime));

    int c = 0;
    for (int p = 2; p * 2 <= n; p++)
            {

            if (prime[p])            //2...4///6//8
            {

                for (int i = 2 * p; i <= n; i += p)
                {                                  //3....6//
                    prime[i] = false;
                    m[i]++;
                    m[p]++;
                }
            }
        }
      //  cout << prime[3]<<endl;
        int ans = 0;
      for (int i = 2; i <= n; i++)
        {
            if (m[i] == 0)
                ans++;
            else
                c = 1;
           // cout << m[i] << " ";
    }
   // cout << "\n";
    ans += c;


return ans;

}

void solve(){
 //ll i,j,n,a,b,c,d,m,k,sum=0,ans=0,cnt=0,r=0,e=0,x,y;
 int n;
 cin >> n;
int s=SieveOfEratosthenes(n);
cout<<s<< "\n";
}
int main()
{
 NeedForSpeed;
 li t;
 cin >> t;
 for(int it=1;it<=t;it++) {
     //cout << "Case #" << it+1 << ": ";
     solve();
 }
 return 0;
}

/*Test Case 1: The final group is {2}.



50463490 
1 0 383423884 
3 0 1 0 1 0 433821062 



Test Case 2: The final groups are {2,4}, and {3}.
if (m[i] == 0)
                ans++;
            else
                c = 1;
Test Case 3: The final groups are {2,3,4,6,8}, {5}, and {7}*/