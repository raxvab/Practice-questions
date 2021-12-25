//search for RAXVAB once/*
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
/*#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
bool isSubSequence(char str1[], char str2[], int m, int n)
{
    // Base Cases
    if (m == 0)
        return true;
    if (n == 0)
        return false;

    // If last characters of two strings are matching
    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);

    // If last characters are not matching
    return isSubSequence(str1, str2, m, n - 1);
}

int main()
{
    // speed;
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string s;
        string b, trygub;
        b += trygub;
        cin >> s;

        if(isSubSequence(s, b, a - 1, 5))
        {
            rev(i, a)
                    cout<< s[i];
        }else
        {
            cout << s;
        }
        
        cout << endl;
    }}
    */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s << endl;
    }
}