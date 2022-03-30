#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
#define pdd pair<long long int, long long int> 
#define for(i,n) for(int i=0;i<n;i++)

int main()
{
int t;cin>>t;while(t--)
{
  //  ios_base::sync_with_stdio(false);
  //  cin.tie();
    int t;
    cin>>t;
    while(t--){
		int n;
		cin >>n;
		string s;
		cin>>s;
		vector<int> v(26,0);
		for(i,n){
			v[s[i]-97]++;
		}
		ll count=1;
		for(i,26){
			if(v[i]%2!=0){
				count=0;
				break;
			}
		}
		if(count){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
}