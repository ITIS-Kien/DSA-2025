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
        int n, k; cin >> n >> k;
        vector <int> a(n);
        for (int &it : a) cin >> it;
        vector <int> dp(k + 1, 0);
        dp[0] = 1;
        for (int it : a){
            for (int i = k; i >= it; i--){
                dp[i] = (dp[i] + dp[i - it]) % mod;
            }
        }
        cout << ((dp[k]) ? "YES" : "NO") << endl;
    }
}
