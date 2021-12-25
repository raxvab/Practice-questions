#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define li long int
#define fi first
#define se second
#define ve vector<ll>
#define mp make_pair
#define pr pair<ll,ll>
#define rep(i,n) for(ll i=0;i<n;i++)
#define repji(j,i,n) for(ll j=i;j<n;j++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"

int main()
{ speed;
   ll t;
    cin >> t;
    while(t--)
    {

int px,py;
cin>>px>>py;
int x=0,y=0;
string s;cin>>s;
int cu = 0, cd = 0, cl = 0, cr = 0;
/*for(int i=0;i<s.length();i++)
{
    if (s[i] == 'U')
        {y++;
            cu++;}
            if (s[i] == 'D')
                {y--;
                    cd++;}
                    if (s[i] == 'L')
                        {x--;
                            cl++;}
                            if (s[i] == 'R')
                                {x++;
                                    cr++;}

}if(x==px&&y==py)
    cout << "YES\n";
    else{
        if (x > px&&x - px <= cr)
        {
            if (y > py && y - py <= cu)
                cout << "YES\n";
            else if (y < py && py - y <= cd)
                cout << "YES\n";
                else if(y==py)
                    cout << "YES\n";
                    else
                        cout << "NO\n";}
        else if (x < px && px - x <=cl)
        {
            if (y > py && y - py <= cu)
                cout << "YES\n";
            else if (y < py && py - y <= cd)
                cout << "YES\n";
            else if (y == py)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
else
    cout << "NO\n";
}*/
for (int i = 0; i < s.length(); i++)
{
    if (s[i] == 'U')
    {
      
        cu++;
    }
    if (s[i] == 'D')
    {

        cd--;
    }
    if (s[i] == 'L')
    {
        //x--;
        cl--;
    }
    if (s[i] == 'R')
    {
        //x++;
        cr++;
    }
}
string ans = "YES";
if (px < cl || px > cr || py < cd || py > cu)
    ans = "NO";
cout << ans << endl;}
return 0;
}