#include<bits/stdc++.h>
using namespace std;
void toh(int n, char s,char h,char d)
{
//base case
if(n==0)
    return;
    //rec case
toh(n - 1, s, d, h);

cout << s << " " << d << " "
     << "\n";
toh(n - 1, h, s, d);
}
int main()
{
    int n;
    cin >> n;
    int m = 1<<n;
    
    m -= 1;
    cout << m << "\n";
   
    toh(n, '1', '2', '3');
}