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
        cout << "[";
        for (int i = 1; i <= n; i++)
        {
            cout << a[1][i];
            if(i == n) cout << "]\n";
            else cout << " ";
        }
        int tmp = 1;
        while (++tmp <= n)
        {
            cout << "[";    
            for (int i = 1; i <= n - tmp + 1; i++)
            {
                a[tmp][i] = a[tmp - 1][i] + a[tmp - 1][i + 1];
                cout << a[tmp][i];
                if(i == n - tmp + 1) cout << "]\n";
                else cout << " ";
            }
        }
        
    }
    
    
}
