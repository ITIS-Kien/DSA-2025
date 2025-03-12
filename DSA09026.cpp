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
void BFS(int u, vector <vector <int>> a){
    queue <int> q; q.push(u);
    used[u] = 1;
    while(q.size()){
        int i = q.front(); q.pop();
        for (int it : a[i]){
            if(!used[it]){
                pre[it] = i;
                q.push(it);
                used[it] = 1;
            }
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
        }
        memset(used, 0, sizeof(used));
        memset(pre, 0, sizeof(pre));
        BFS(s, a);
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
