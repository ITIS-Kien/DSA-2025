#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define nguyentukien ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

// Thêm mảng dx, dy để xử lý 8 hướng
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int t = 1, n, m, cnt; 
int a[505][505], 
    mark[505][505];

void DFS(int x, int y) {
    mark[x][y] = 1;
    
    // Duyệt qua 8 hướng
    for (int i = 0; i < 8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        // Kiểm tra ô (nx, ny) có hợp lệ và chưa thăm
        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (a[nx][ny] && !mark[nx][ny]) {
                DFS(nx, ny);
            }
        }
    }
}

signed main() {
    nguyentukien
    cin >> t;
    while (t--) {
        cnt = 0;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                mark[i][j] = 0;
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (a[i][j] && !mark[i][j]) {
                    DFS(i, j);
                    ++cnt;
                }
            }
        }
        cout << cnt << endl;   
    }
    return 0;
}