#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define nguyentukien ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int t = 1, n, m, s, e;
vector <int> adj[1003];
vector <int> mark(1003, -1);

void BFS(){
    queue <int> q;
    q.push(s);
    mark[s] = 0;
    while (q.size())
    {
        int u = q.front(); q.pop();
        for (int it : adj[u]){
            if(mark[it] == -1){
                q.push(it);
                mark[it] = mark[u] + 1;
            }
        }
    }
    cout << mark[e] << endl;
}

signed main(){
    nguyentukien
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> s >> e;
        for (int i = 0; i < m; ++i){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        BFS();
        for (int i = 1; i <= n; ++i) adj[i].clear();
        mark.assign(1003, -1);

    }
    
    
}