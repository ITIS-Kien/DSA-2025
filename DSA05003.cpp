#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define nguyentukien ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int t = 1;

int F[101][101][101];
signed main(){
    nguyentukien
    cin >> t;
    while (t--)
    {
        // memset(F, sizeof(F), 0);
        int l, m, n; cin >> l >> m >> n;
        string s1, s2, s3; cin >> s1 >> s2 >> s3;
        for(int i = 0; i <= l; i++){
            for(int j = 0; j <= m; j++){
                for(int k = 0; k <= n; k++){
                    if(i == 0 || j == 0 || k == 0) F[i][j][k] = 0;
                    else if(s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]){
                        F[i][j][k] = F[i - 1][j - 1][k - 1] + 1;
                    }
                    else{
                        F[i][j][k] = max({F[i - 1][j][k], F[i][j - 1][k], F[i][j][k - 1]});
                    }
                }
            }
        }   
        cout << F[l][m][n] << endl;
    }
    
    
}