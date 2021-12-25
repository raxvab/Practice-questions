
#include <bits/stdc++.h>
using namespace std;
#define li long long
#define ld long double
li solve(ld M, ld N, ld s)
{
	ld j=ceil(M / s);
    ld k=ceil(N / s);
li ans = j*k;

	return ans;
}


int main()
{
	long double a,b,m;
	cin>>a>>b>>m;

	cout << solve(a,b,m);

	return 0;
}
