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
        int n; cin >> n;
        int a[n + 5][n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[1][i];
        }
        int j = 1;
        while (++j <= n)
        {
            for (int i = 1; i <= n - j + 1; i++)
            {
                a[j][i] = a[j - 1][i] + a[j - 1][i + 1];
                
            }
        }
        while (--j >= 1)
        {
            cout << "[";
            for (int i = 1; i <= n - j + 1; i++)
            {
                cout << a[j][i];
                if(i == n - j + 1) cout << "] ";
                else cout << " ";
            }
        }
        cout << endl;
    }
    
    
}
