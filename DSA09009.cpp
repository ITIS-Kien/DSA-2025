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
void BFS(int u, vector <vector <int>> a){
    queue <int> q; q.push(u);
    used[u] = 1;
    while(q.size()){
        int i = q.front(); q.pop();
        for (int it : a[i]){
            if(!used[it]){
                q.push(it);
                used[it] = 1;
            }
        }
    }
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
                BFS(i, a);
            }
        }
        cout << cnt << endl;
    }
    
}
