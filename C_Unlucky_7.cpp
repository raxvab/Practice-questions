/*  Author: Tarun Kumar
    E-mail: tarunkumar281200@gmail.com

    " A code is like love,
        it has created with clear intentions at the beginning,
            but it can get complicated:) "
*/
#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define ld long double
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll, ll>>
#define prqueue priority_queue<ll, vector<ll>, greater<ll>>
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define f0(i, n) for (i = 0; i < n; i++)
#define f1(i, n) for (i = 1; i <= n; i++)
#define fab(i, a, b) for (i = a; i <= b; i++)
#define f0r(i, n) for (i = n - 1; i >= 0; i--)
#define fabr(i, a, b) for (i = b; i >= a; i--)
#define memo(a, b) memset(a, b, sizeof(a))
#define display(x)              \
    {                           \
        for (auto dsp : x)      \
            cout << dsp << " "; \
        cout << "\n";           \
    }
#define hi cout << "hi\n"
#define ln "\n"
    using namespace std;
const ld pi = acos(-1);
const ll mod = 1e9 + 7;
bool sortbysec(pair<ll, ll> a, pair<ll, ll> b) //(i+1,i)
{
    return (a.second < b.second);
}

ll checkdec(ll n)
{
    ll i, j, k, l, tmp;
    while (n > 0)
    {
        tmp = n % 10;
        if (tmp == 7)
            return 0;
        n /= 10;
    }
    return 1;
}

ll decToOctal(ll n)
{

    // array to store octal number
    ll octalNum[9000];

    // counter for octal number array
    ll i = 0;
    while (n != 0)
    {

        // storing remainder in octal array
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    for (ll j = i - 1; j >= 0; j--)
    {
        if (octalNum[j] == 7)
            return 0;
    } //cout << octalNum[j];
    return 1;
}

int main()
{
    FAST;
    ll t, n, i, j, k, len, x, y, z, c, f, flag, p, q, mx, mn, l, r, sum, ans, tmp, it, pos, avg, m, cnt;
    string s;
    char ch;
    vll v;
    vpll vec;
    unordered_map<ll, ll> mappu;
    pair<ll, ll> pr;
    t = 1;
    // cin>>t;while(t--)
    {
        f = 0;
        sum = 0;
        flag = 0;
        ans = 0;
        cnt = 0;
        v.clear();
        mappu.clear();
        vec.clear();
        cin >> n;

        f1(i, n)
        {
            if (checkdec(i) && decToOctal(i))
                ans++;
        }

        cout << ans << ln;
    }
    return 0;
}
