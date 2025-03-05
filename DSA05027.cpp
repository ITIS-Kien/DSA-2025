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
        int n, v; cin >> n >> v;
        int a[n + 1], c[n + 1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> c[i];
        vector <vector <int>> dp(n + 1, vector <int> (v + 1, 0));
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= v; j++){
                dp[i][j] = dp[i - 1][j];
                if(j >= a[i]) dp[i][j] = max(dp[i - 1][j - a[i]] + c[i], dp[i][j]);
            }
        }
        cout << dp[n][v] << endl;
    }
    
    
}
