#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, used[1005];
vector <vector <int>> a(1005);
void dfs(int u){
    used[u] = 1;
    for (int it : a[u]) if(!used[it]) dfs(it);
}
int solve(){
    dfs(1);
    for (int i = 2; i <= n; ++i) if(!used[i]) return 0;
    for (int i = 2; i <= n; ++i)
    {
        memset(used, 0, sizeof(used));
        dfs(i);
        if(!used[1]) return 0;
    }
    return 1;
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
        }
        if(solve()) cout << "YES" << endl;
        else cout << "NO" << endl;
        memset(used, 0, sizeof(used));
        for (int i = 1; i <= n; ++i) a[i].clear();
    }
    
    
}
