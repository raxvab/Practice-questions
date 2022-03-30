#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long int 
#define pb push_back
#define mp make_pair
#define FOR(x,val,to) for(int x=(val);x<int((to));++x)
#define umap unordered_map
#define uset unordered_set

// fast banane me madadgaaar
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    
    while(t--){
ll n ;cin>>n;
//what if n==1 hua to ....
if(n==1)
{
    int a,b;cin>>a>>b;a==b?cout<<0:cout<<-1;
    cout<<"\n";
    continue;
}
vector<ll> v;
vector<ll> r;
umap<ll,ll,custom_hash> m1 ;// unordered map fast krne hetu
umap<ll,ll,custom_hash> m2,mb;
ll x;
FOR(i,0,n)
{cin>>x;
v.pb(x);m1[x]++;
mb[x]++;
}	
//umap<ll,ll,custom_hash>::iterator it;// kahi se bhi koi bhi key access krne ke liye gfg ka masala
FOR(i,0,n)
{cin>>x;
r.pb(x);m2[x]++;
mb[x]++;
}

ll l=0;
for(auto i : mb)
{
    if(i.second%2==1)
    {
        l==1;
        break;
    }
}
if(l==1)
{
    cout<<"-1\n";
    continue;
}
// ab cost calculation  shuru

vector<ll> s,sp;
for(auto i : mb)
{
    ll a=i.first;
    ll b=i.second/2;
    ll g=b-m1[a];
    ll h=b-m2[a];
    int j=0,k=0;
    while(j<g)
    {
        s.pb(a);
        j++;
    }
    while(k<h)
    {
        sp.pb(a);
        k++;
    }
}

sort(s.begin(),s.end());
sort(sp.begin(),sp.end());
int z=0,j=s.size()-1;
ll cost=0;
sort(v.begin(),v.end());
sort(r.begin(),r.end());

ll p=min(v[0],r[0]);
p=p*2;
while(z<s.size()&&j>=0)
{
    cost+=min(p,min(s[z],sp[j]));
    z++;j--;
}
cout<<cost<<"\n";






    }
    
    return 0;
}
