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
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"



string getPalindrome(string str) { 

unordered_map<char, int> hmap; 
for (int i = 0; i < str.length(); i++) 
	hmap[str[i]]++; 


int oddCount = 0; 
char oddChar; 
for (auto x : hmap) { 
	if (x.second % 2 != 0) { 
	oddCount++; 
	oddChar = x.first; 
	} 
} 
if (oddCount > 1 || oddCount == 1 && 
				str.length() % 2 == 0) 
	return "NO SOLUTION"; 
string firstHalf = "", secondHalf = ""; 
for (auto x : hmap) { 
	string s(x.second / 2, x.first); 
	firstHalf = firstHalf + s; 
	secondHalf = s + secondHalf; 
} 


return (oddCount == 1) ? 
		(firstHalf + oddChar + secondHalf) : 
		(firstHalf + secondHalf); 
} 

int main() { 
string s;
cin>>s;
cout << getPalindrome(s); 
return 0; 
} 

