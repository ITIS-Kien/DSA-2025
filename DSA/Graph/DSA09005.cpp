#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA
int f[10007];
queue <int> q;
void BFS(vector <vector <int>> a, int v, int s){
    q.push(s);
    while (!q.empty()){
        int i = q.front(); q.pop();
        if(f[i]) {
            cout << i << " ";
            f[i] = 0;
        }
        for (int it : a[i]){
            if(f[it]) q.push(it);
        }
    }
    
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        memset(f, 1, sizeof(f));
        int v, e, s; cin >> v >> e >> s;
        vector <vector <int>> a(v + 1);
        while (e--)
        {
            int x, y; cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        BFS(a, v, s);
        cout << endl;
    }
    
    
}
