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
        string s1, s2; cin >> s1 >> s2;
        int n = s1.size(), m = s2.size();
        vector <vector <int>> dp(n+1, vector <int> (m+1, 0));
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                if (s1[i-1] == s2[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        cout << dp[n][m] << endl;
    }
    
    
}
