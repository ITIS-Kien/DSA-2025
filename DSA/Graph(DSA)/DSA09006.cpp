#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA
int used[10000], pre[10000];
void DFS(int u, vector <vector <int>> a){
    used[u] = 1;
    for (int it : a[u]){
        if(!used[it]){
            pre[it] = u;
            DFS(it, a);
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--){
        int v, e, s, f; cin >> v >> e >> s >> f;
        vector <vector <int>> a(v + 1);
        while (e--){
            int x, y; cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        memset(used, 0, sizeof(used));
        memset(pre, 0, sizeof(pre));
        DFS(s, a);
        if(!used[f]) cout << -1 << endl;
        else {
            vector <int> path;
            for (int u = f; u; u = pre[u]) path.push_back(u);
            reverse(path.begin(), path.end());
            for (int it : path) cout << it << " ";
            cout << endl;
        }

    }
    
}
