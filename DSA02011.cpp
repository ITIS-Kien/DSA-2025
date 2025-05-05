#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll n, k, a[35], res = 1e9;

void Try(int i, int sum, int count) {
    if (sum > k || count >= res) return; // Nếu tổng vượt quá k hoặc số tờ tiền >= res, dừng đệ quy
    if (sum == k) { 
        res = min(res, count); // Cập nhật kết quả
        return;
    }
    for (int j = i; j < n; ++j) {
        Try(j + 1, sum + a[j], count + 1); // Thử chọn tờ tiền thứ j
    }
}

int main() {
    fast;
    int t; cin >> t;
    while (t--) {
        res = 1e9;
        cin >> n >> k;
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n, greater<int>()); // Sắp xếp giảm dần để ưu tiên tờ tiền lớn
        Try(0, 0, 0);
        if (res == 1e9) cout << -1 << endl; // Nếu không tìm được kết quả, in ra -1
        else cout << res << endl; // In ra số tờ tiền ít nhất
    }
    return 0;
}