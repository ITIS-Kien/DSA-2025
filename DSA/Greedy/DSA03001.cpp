#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, cnt = 0; cin >> n;
        while (n)
        {
            if(n >= 1000) n -= 1000;
            else if(n >= 500) n -= 500;
            else if(n >= 200) n -= 200;
            else if(n >= 100) n -= 100;
            else if(n >= 50) n -= 50;
            else if(n >= 20) n -= 20;
            else if(n >= 10) n -= 10;
            else if(n >= 5) n -= 5;
            else if(n >= 2) n -= 2;
            else if(n >= 1) n -= 1;
            cnt++;
        }
        cout << cnt << endl;
    }
    
    
}
