//search for RAXVAB once
/*#include <bits/stdc++.h>
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
int main()
{

    speed;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;

        cin >> s;
        vector<char> v;
        for (ll i = 0; i < s.length();i+=4)
        {
            char binaryNumber[4];
            rep(j, 4)
            binaryNumber[j]=s[i+j];

            cout<<(char)(97 + stoi(binaryNumber, 0, 2));
        }
       cout <<  endl;
    }
}
*/

#include <bits/stdc++.h>
    using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;

        string str;
        cin >> str;
        string result = "";
       
        char arr[16] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
        for (long int i = 0; i < n-3; i = i + 4)
        {
            string stn = str.substr(i, i + 4);
            long int bin = stoi(stn, 0, 2);
            result += arr[bin];
            cout << stn << endl;
        }
        cout << result << endl;
    }
    return 0;
}