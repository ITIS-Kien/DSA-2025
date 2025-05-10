#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int n, k, a[11][11], row[11];
vector <string> ans;

void solve(int idx = 1, int sum = 0, string s = ""){
    if(sum > k) return;
    if(idx == n + 1){
        if(sum == k) ans.push_back(s);
        return;
    } 
    for (int i = 1; i <= n; ++i){
        if(!row[i]) {
            row[i] = 1;
            solve(idx + 1, sum + a[idx][i], s + to_string(i) + " ");
            row[i] = 0;
        }
    }
}
int main(){
    BOOST;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j) cin >> a[i][j];
    }
    solve();
    cout << ans.size() << endl;
    for (string it : ans) cout << it << endl;
    
}