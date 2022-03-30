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

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define NeedForSpeed                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

// bool isvowel(char a)
// {
//     if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
//         return true;
//     else
//         return false;
// }
// char insert1(string sr, string br)
// {
//     ll max = -1, vowel = 0, con = 0;
//     ll alp[26] = {0}, alp2[26] = {0};
//     // map<ll,ll>m;
//     forn(i, sr.size())
//     {

//         if (sr[i] == '?' && br[i] != '?')
//         {
//             alp[br[i] - 97]++;
//             if (isvowel(br[i]))
//                 vowel++;
//             else
//                 con++;
//         }
//         if (sr[i] != '?' && br[i] == '?')
//         {
//             alp[sr[i] - 97]++;
//             if (isvowel(sr[i]))
//                 vowel++;
//             else
//                 con++;
//         }
//     }

//     ll index = 0;
//     char r, vo = 'a', co = 'b';
//     forn(i, 26)
//     {
//         if (max < alp[i])
//         {
//             max = alp[i];
//             index = i;
//             r = char(index + 97);
//             if (isvowel(r))
//                 vo = r;
//             else
//                 co = r;
//         }
//     }

//     return co;
// }
// char insert(string sr, string br)
// {
//     ll max = -1, vowel = 0, con = 0;
//     ll alp[26] = {0}, alp2[26] = {0};
//     // map<ll,ll>m;
//     forn(i, sr.size())
//     {

//         if (sr[i] == '?' && br[i] != '?')
//         {
//             alp[br[i] - 97]++;
//             if (isvowel(br[i]))
//                 vowel++;
//             else
//                 con++;
//         }
//         if (sr[i] != '?' && br[i] == '?')
//         {
//             alp[sr[i] - 97]++;
//             if (isvowel(sr[i]))
//                 vowel++;
//             else
//                 con++;
//         }
//     }

//     ll index = 0;
//     char r, vo = 'a', co = 'b';
//     forn(i, 26)
//     {
//         if (max < alp[i])
//         {
//             max = alp[i];
//             index = i;
//             r = char(index + 97);
//             if (isvowel(r))
//                 vo = r;
//             else
//                 co = r;
//         }
//     }

//     return vo;
// }

// void solve()
// {
//     ll m, k, sum = 0, ans = 0, y, i = 0;
//     string s, p, k, l;
//     cin >> m;
//     cin >> s >> p;
//     k = s;
//     l = p;
//     string same;

//     char x1 = insert(s, p);

//     for (ll i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '?' && p[i] != '?')
//             s[i] = x1;
//         if (s[i] != '?' && p[i] == '?')
//             p[i] = x1;
//     }

//     for (ll i = 0; i < s.size(); i++)
//     {
//         if (s[i] == p[i])
//             continue;

//         else
//         {
//             if ((isvowel(s[i]) && isvowel(p[i])) || (!isvowel(s[i]) && !isvowel(p[i])))
//                 ans += 2;
//             else if ((!isvowel(s[i]) && isvowel(p[i])) || (isvowel(s[i]) && !isvowel(p[i])))
//                 ans++;
//         }
//     }
//     s = k;

//     p = l;
//     ll ans1 = 0;
//     char x2 = insert1(s, p);
//     for (ll i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '?' && p[i] != '?')
//             s[i] = x2;
//         if (s[i] != '?' && p[i] == '?')
//             p[i] = x2;
//     }
//     for (ll i = 0; i < s.size(); i++)
//     {
//         if (s[i] == p[i])
//             continue;

//         else
//         {
//             if ((isvowel(s[i]) && isvowel(p[i])) || (!isvowel(s[i]) && !isvowel(p[i])))
//                 ans1 += 2;
//             else if ((!isvowel(s[i]) && isvowel(p[i])) || (isvowel(s[i]) && !isvowel(p[i])))
//                 ans1++;
//         }
//     }

//     cout << min(ans, ans1) << "\n";
// }

//////////////////////////////////////////////////
void solve()
{
    int n;
    cin >> n;
    string s, p;
    cin >> s >> p;
    int cnt = 0;
    int vowel = 0, cons = 0;
    set<char> st = {'a', 'e', 'i', 'o', 'u'};
    vector<int> cor(26, 0);
    for (int i = 0; i < n; i++)
    {
        if (p[i] == s[i])
            continue;
        if (p[i] == '?')
        {
            cor[s[i] - 'a']++;
            if (st.find(s[i]) == st.end())
                cons++;
            else
                vowel++;
        }
        else if (s[i] == '?')
        {
            cor[p[i] - 'a']++;
            if (st.find(p[i]) == st.end())
                cons++;
            else
                vowel++;
        }
        else
        {
            if (st.find(s[i]) == st.end() && st.find(p[i]) == st.end())
            {
                cnt += 2;
            }
            else if (st.find(s[i]) != st.end() && st.find(p[i]) != st.end())
            {
                cnt += 2;
            }
            else
                cnt += 1;
        }
    }
    int mx1 = 0, mx2 = 0;
    char ch1 = 'a';
    char ch2 = 'b';
    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        if (st.find('a' + i) != st.end())
        {
            if (cor[i] > mx1)
            {
                mx1 = cor[i];
                ch1 = 'a' + i;
            }
            continue;
        }
        if (cor[i] > mx2)
        {
            mx2 = cor[i];
            ch2 = 'a' + i;
        }
    }
    int x = 0, y = 0;
    x += 2 * (vowel - cor[ch1 - 'a']) + cons;
    y += 2 * (cons - cor[ch2 - 'a']) + vowel;
    cnt += min(x, y);

    cout << cnt << endl;
}

int main()
{
    NeedForSpeed;
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        // cout << "Case #" << it+1 << ": ";
        solve();
    }
    return 0;
}