#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj; // Danh sách kề của đồ thị
vector<bool> visited;    // Mảng đánh dấu các đỉnh đã được duyệt

// Hàm DFS đệ quy
void DFS(int u) {
    cout << u << " ";  // In đỉnh đang duyệt
    visited[u] = true;  // Đánh dấu đỉnh đã thăm
    
    // Duyệt các đỉnh kề chưa được thăm
    for (int v : adj[u]) {
        if (!visited[v]) {
            DFS(v);
        }
    }
}

int main() {
    int n, m; // Số đỉnh và số cạnh
    cin >> n >> m;
    
    adj.resize(n + 1);
    visited.resize(n + 1, false);
    
    // Đọc danh sách cạnh
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); 
        // Nếu đồ thị vô hướng, cần thêm cạnh ngược lại
        adj[v].push_back(u); 
    }
    
    // Thực hiện DFS từ đỉnh 1
    cout << "DFS traversal starting from vertex 1: ";
    DFS(1);
    cout << endl;
    
    return 0;
}
