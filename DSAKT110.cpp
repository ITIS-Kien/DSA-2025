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
        ll a[n], f[n];
        for (ll &it : a) cin >> it;
        f[0] = a[0];
        f[1] = max(a[0], a[1]);
        for (int i = 2; i < n; i++)
        {
            f[i] = max(f[i - 1], f[i - 2] + a[i]);
        }
        cout << f[n - 1] << endl;
    }
        
    
}
