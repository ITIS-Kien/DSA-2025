#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int m, n, q, used[1001];
vector <int> a[1001];

void DFS(int cur){
    used[cur] = 1;
    for (int it : a[cur]) if(!used[it]) DFS(it);
}

int main(){
    BOOST;
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < m; ++i){
            int x, y; cin >> x >> y;
            a[x].emplace_back(y);
            a[y].emplace_back(x);
        }
        cin >> q;
        while (q--)
        {
            int x, y; cin >> x >> y;
            memset(used, 0, sizeof(used));
            DFS(x);
            if(used[y]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        for (int i = 1; i <= n; ++i) a[i].clear();
    }
    
    
}