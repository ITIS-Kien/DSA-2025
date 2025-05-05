#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

struct Point{
    int x, y, cnt;
};

int main(){
    BOOST;
    int t; cin >> t;
    while (t--)
    {
        deque <Point> dq;
        int m, n, found = 0; cin >> m >> n;
        int a[m][n], used[m][n]; 
        for (int i = 0; i < m; ++i){
            for (int j = 0; j < n; ++j){
                cin >> a[i][j];
                used[i][j] = 0;
            }
        }
        dq.push_back({0, 0, 0});
        while (dq.size())
        {
            Point it = dq.front();
            dq.pop_front();
            used[it.x][it.y] = 1;
            if(it.x == m - 1 and it.y == n - 1) {
                cout << it.cnt << endl;
                found = 1;
                break;
            } 
            if(it.x + a[it.x][it.y] < m and !used[it.x + a[it.x][it.y]][it.y]) dq.push_back({it.x + a[it.x][it.y], it.y, it.cnt + 1});
            if(it.y + a[it.x][it.y] < n and !used[it.x][it.y + a[it.x][it.y]]) dq.push_back({it.x, it.y + a[it.x][it.y], it.cnt + 1});
        }
        if(!found) cout << -1 << endl;
    }
}