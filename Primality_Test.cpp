#include<bits/stdc++.h>
using namespace std;

void isprime(int n){
	if(n==1){
		cout<<"no"<<"\n";
		return;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			cout<<"no"<<"\n";
			return;
		}
	}
	cout<<"yes"<<"\n";
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		isprime(n);
	}
	return 0;
}