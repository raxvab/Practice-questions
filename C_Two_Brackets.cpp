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
#define rep(i, n) for (int i = 0; i < n; i++)
#define repji(j, i, n) for (ll j = i; j < n; j++)
#define rev(i, n) for (ll i = n; i >= 0; i--)
/*#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
*/
#define endl "\n"

int main()
{
    // speed;
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        cin >> s1;
        int c = 0, c1 = 0, c2 = 0, c3 = 0;
        int l = s1.length();
        /* 
     
        rep(i,l)
        {
            if(s[i]=='[')
                c++;
                else if(s[i]==']')
                    c1++;
                    else if(s[i]=='(')
                        c2++;
                        else if(s[i]==')')
                            c3++;
                            else
                                continue;
        }
        int ans=0;
        if(c==c1)
            ans = c ;
           if(c2==c3)
               ans += c2;
           cout << ans << endl;
*/
        stack <char> s;
        int count=0;
        rep(i, l)
        {
            s.push(s1[i]);
           
            if (s.top() == '[')
                c++;
            else if (s.top() == ']'&&c>0)
                {c--;
                    count++;}
                    else if (s.top() == '(')
                        c2++;
                    else if (s.top() == ')' && c2 > 0)
                        {c2--;
                            count++;
                        }
                            else continue;
        }
   
            cout << count << endl;
    }}