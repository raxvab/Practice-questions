#include <bits/stdc++.h>
using namespace std;

#define ll int

int main()
{
    int n,t;
    cin >>n>> t;
    string s;
   
        cin >> s;
   
     //   for (int j = 0; j < t; j++)
     while (t--)
     {
         /* code */
     
     
            for (int i = 0; i < n-1; i++)
            {
if(s[i]=='B'&&s[i+1]=='G')
{
    char a = s[i];
    s[i] = s[i + 1];
    s[i + 1] = a;
    i++;
}
            }
            }
        cout << s << endl;

}