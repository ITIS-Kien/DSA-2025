#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int n, a[20][20], used[20], res, beg;
vector <int> path;

void Try(int t, int pre, int sum = 0){
    if(sum > res) return;
    if(t == n) res = min(sum, res);
    else {
        for (int i = 1; i <= n; ++i){
            if(!used[i]){
                used[i] = 1;
                path.push_back(i);
                Try(t + 1, i, sum + a[pre][i]);
                path.pop_back();
                used[i] = 0;
            }
        }
    }
}
int main(){
    BOOST;
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i){
            for (int j = 1; j <= n; ++j) cin >> a[i][j];
        }
        res = 1e9;
        for (int i = 1; i <= n; ++i){
            beg = i;
            memset(used, 0, sizeof(used));
            Try(0, i);
        }
        cout << res << endl;
    }

    
}