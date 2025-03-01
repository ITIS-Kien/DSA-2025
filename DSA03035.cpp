#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int main()
{
    fast;
    int t = 1, n;
    while(t--)
    {
        cin >> n;
        vector <int> a(n + 5), f(n + 5, 0);
        for(int i = 1; i <= n; i++) cin >> a[i];
        int res = 0;
        for(int i = 1; i <= n; i++)
        {
            f[a[i]] = f[a[i] - 1] + 1;
            res = max(res, f[a[i]]);
        }
        cout << n - res;
    }
}