#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


vector <vector <int>> a(1005);
int used[1005], n, m;
void dfs(int u){
    used[u] = 1;
    for (int it : a[u]) if(!used[it]) dfs(it);
}
void solve(){
    int cc = 0;
    for (int i = 1; i <= n; ++i){
        if(!used[i]){
            ++cc;
            dfs(i);
        }
    }
    for (int i = 1; i <= n; ++i){
        memset(used, 0, sizeof(used));
        used[i] = 1;
        int cnt = 0;
        for (int j = 1; j <= n; ++j)
        {
            if(!used[j]){
                ++cnt;
                dfs(j);
            }
        }
        if(cnt > cc) cout << i << " ";
    }
    cout << endl;
    memset(used, 0, sizeof(used));
    for (int i = 1; i <= n; ++i) a[i].clear();
}

int main(){
    fast;
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        while (m--)
        {
            int x, y; cin >> x >> y;
            a[x].emplace_back(y);
            a[y].emplace_back(x);
        }
        solve();
    }
    
}
