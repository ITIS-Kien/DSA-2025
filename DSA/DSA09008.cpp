#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int used[100005];
void DFS(int u, vector <vector <int>> a){
    used[u] = 1;
    for (int it : a[u])
        if(!used[it]) DFS(it, a);
}
int main(){
    int t; cin >> t;
    while(t--){
        int v, e, cnt = 0; cin >> v >> e;
        vector <vector <int>> a(v + 10);
        while (e--)
        {
            int x, y; cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        memset(used, 0, sizeof(used));
        for (int i = 1; i <= v; i++){
            if(!used[i]){
                cnt++;
                DFS(i, a);
            }
        }
        cout << cnt << endl;
    }
    
}
