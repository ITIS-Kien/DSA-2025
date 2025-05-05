#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int V, E, used[1001],
    degIn[1001], degOut[1001];
vector <int> adj[1001];

void DFS(int u){
    used[u] = 1;
    for (int &it : adj[u]) if (!used[it]) DFS(it);
}

bool cycleCheck(){
    int cycle = 0;
    memset(used, 0, sizeof(used));
    for (int i = 1; i <= V; ++i){
        if(!used[i]){
            ++cycle;
            DFS(i);
        }
    }
    return cycle == 1;
}
int main(){
    BOOST;
    int t; cin >> t;
    while (t--)
    {
        cin >> V >> E;
        while (E--)
        {
            int x, y; cin >> x >> y;
            ++degOut[x];
            ++degIn[y];
            adj[x].emplace_back(y);
        }
        
    }
    
    
}