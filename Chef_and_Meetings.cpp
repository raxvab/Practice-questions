//search for RAXVAB once
#include <bits/stdc++.h>
#include <cstring>
#include <string.h>
//#include<string>
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
void convert(vector<char> &s)
{
    string z;
    z.pb(s[0]);
    z.pb(s[1]);
   

    if (z != "12" && s[5] == 'P')
    {
        int x = stoi(z);
        x += 12;
        z = to_string(x);
        s[0] = z[0];
        s[1] = z[1];
    }
    if (z == "12" && s[5] == 'A')
    {
        s[0] = '0';
        s[1] = '0';
    }
    s[5] = 'A';
    return;
}
/*void minute(string & s)
{
    int m = 0;
    m += (int)(s[3]-48);
    m *= 10;
    m += (int)(s[4]-48);
    string x = to_string(m);
    s[3] = x[0];
    s[4] = x[1];
    return ;
}*/
int main()
{
  //  speed;
    ll t;
    cin >> t;
   // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--)
    {
       
    /*  string sp1,sp2;
        cin >> sp1;
        cin >> ws;
        cin >> sp2;
        //cin.ignore();
        string s = sp1 + " " + sp2;*/
        vector<char> v(7);
        for (int i = 0; i < 7; i++)
           cin>> v[i];
        convert(v);
        // cout << s;
        //  cout << "\n";
        //  ll sec = convert(s);
        //  ll min = minute(s);
        //  cout << sec << " " << min;

        ll n;
        cin >> n;
       
        rep(i, n)
        {
          /*  string s1,s2,s11,s22;
          /*  getline(cin, s1);
            cin.ignore();
            
            cin >> s1;

            cin >> ws;

            cin >> s11;
            cin >> ws;
            cin >> s2;
            cin >> ws;
            cin >> s22;
            string sX = s1 + " " + s11;
            string sY = s2 + " " + s22;*/
           // ll sec1 = convert(sX);
          //  ll min1 = minute(sX);
           // cout << sX << endl;
            //cout << sY << endl;
           // ll sec2 = convert(sY);
           // ll min2 = minute(sY);
            string q="";
           
                vector<char> v1(7);
                for (int i = 0; i < 7; i++)
                    cin>>v1[i];
                vector<char> v2(7);
                for (int i = 0; i < 7; i++)
                   cin>> v2[i];
                convert(v2);
                convert(v1);
                if (v>= v1 && v <= v2)
                    q.pb('1');
                else
                    q.pb('0');
          /*  else if (sec==sec1&&sec<sec2)
         {
             if (min >= min1)
                 q.pb('1');
                 else
                     q.pb('0');
         }
         else if (sec == sec2 && sec > sec1)
{
    q.pb('1');
}
else if (sec == sec2 && sec==sec1)
{if(min>=min1&&min<=min2)
    q.pb('1');
    else
        q.pb('0');
        }
    else q.pb('0');*/

/*cout << "\n"
             << sec1 << " " << min1<<"\n";

            cout
             << sec2 << " " << min2;
      */
cout << q;
    
        }
      
        cout << endl;
        }
       // cout << endl;
    
    return 0;
}
