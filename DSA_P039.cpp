#include <bits/stdc++.h>
<<<<<<< HEAD
#define ll long long
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define MOD 1000000007

using namespace std;
int t = 1, n;
vector<vector<ll>> cost, dp;

int main(){
    boost;
    cin >> t;
    while(t--){
        cin >> n;
        cost.assign(n + 1, vector<ll>(n + 1, 0));
        dp.assign(1 << n, vector<ll>(n + 1, INT_MAX));
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j) cin >> cost[i][j];
        }
        for(int i = 0; i < n; ++i) dp[1 << i][i] = 0;
        for(int mask = 0; mask < (1 << n); ++mask){
            for(int i = 0; i < n; ++i){
                if(mask & (1 << i)){
                    for(int j = 0; j < n; ++j){
                        if(!(mask & (1 << j))){
                            int new_mask = mask | (1 << j);
                            dp[new_mask][j] = min(dp[new_mask][j], dp[mask][i] + cost[i][j]);
                        }
                    }
                }
            }
        }
        ll ans = INT_MAX;
        for(int i = 0; i < n; ++i) ans = min(ans, dp[(1 << n) - 1][i]);
        cout << ans << endl;
    }
}
=======
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

struct tmp{
    int val, row, col;
};
bool cmp(tmp a, tmp b){
    return a.val > b.val;
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int col[n], row[n];
        vector <tmp> a;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                tmp x; cin >> x.val;
                x.row = i;
                x.col = j;
                a.push_back(x);
            }
        }
        int sum = 0;
        sort(a.begin(), a.end(), cmp);
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        for (int i = 0; i < n * n; i++){
            int x = a[i].val;
            int r = a[i].row, c = a[i].col;
            if(!row[r] && !col[c]){
                sum += x;
                row[r] = 1;
                col[c] = 1;
            }
        }
        cout << sum << endl;
    }
}
>>>>>>> ad4484823126a368973abacfb49a4345f0e671d7
