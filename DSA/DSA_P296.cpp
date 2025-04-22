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
    int n, t; cin >> n >> t;
    vector <int> a(n + 1), dp(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        dp[i] = dp[i - 1] + ((a[i] >= 0) ? a[i] : 0);
    }
    while (t--)
    {
        int a, b; cin >> a >> b;
        cout << dp[b] - dp[a - 1] << endl;
    }
    
}
