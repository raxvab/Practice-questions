#include<bits/stdc++.h>
using namespace std;
//coding iz lub
int main()
{
    int t , i , n ,j;
    cin >> t;
   
   while(t--)
    {
    	 int x,y;
    int rem,a;
        cin >> x >> y >> n;
        rem = n%x;
        if(rem >= y)
        {
            a = n-rem+y;
        }
        else
        {
            a = n - rem - x + y;
        }
        cout << a << "\n" ;
        
    }
    return 0;
}
