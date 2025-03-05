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
        int n1 = s1.size(), n2 = s2.size();
        vector <vector <int>> dp(n1 + 1, vector <int> (n2 + 1, 0));
        for (int i = 0; i < n1; i++){
            for (int j = 0; j < n2; j++)
            {
                if(s1[i] == s2[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
                else dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
        cout << dp[n1][n2] << endl;
    }
        
    
}
