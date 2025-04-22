#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
const ll MAXN = 1e18; // Giá trị lớn để kiểm tra tràn số khi tính LCM

// Hàm tính bội chung nhỏ nhất (LCM) của hai số
ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b; // Tính LCM bằng công thức: (a * b) / GCD(a, b)
}

int main() {
    fast;
    int n;
    cin >> n; // Nhập số lượng phần tử trong dãy
    vector<ll> a(n); // Dãy số đầu vào
    unordered_set<ll> s; // Tập hợp để lưu các giá trị xuất hiện trong dãy

    // Đọc dãy số và lưu vào tập hợp `s`
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]); // Lưu các giá trị vào tập hợp để kiểm tra nhanh
    }

    map<ll, int> mp; // Lưu trữ LCM hiện tại và độ dài lớn nhất của đoạn con có LCM đó
    int ans = 0; // Kết quả: độ dài lớn nhất của đoạn con thỏa mãn điều kiện

    // Duyệt qua từng phần tử trong dãy
    for (int i = 0; i < n; i++) {
        map<ll, int> mp2; // Map tạm thời để lưu các giá trị LCM mới
        mp2[a[i]] = max(mp2[a[i]], 1); // Đoạn con chỉ chứa phần tử `a[i]` có độ dài 1

        // Duyệt qua các LCM hiện tại trong `mp`
        for (auto &[curLCM, len] : mp) {
            ll newLCM = lcm(curLCM, a[i]); // Tính LCM mới khi thêm `a[i]` vào đoạn con
            if (newLCM > MAXN) { // Nếu LCM vượt quá giới hạn, in kết quả và thoát
                cout << n << endl;
                return 0;
            }
            mp2[newLCM] = max(mp2[newLCM], len + 1); // Cập nhật độ dài lớn nhất cho LCM mới
        }

        // Giữ lại các LCM cũ trong `mp` (không thêm `a[i]`)
        for (auto &[curLCM, len] : mp) {
            mp2[curLCM] = max(mp2[curLCM], len);
        }

        // Hoán đổi `mp` và `mp2` để cập nhật trạng thái
        swap(mp, mp2);
    }

    // Kiểm tra các LCM cuối cùng trong `mp`
    for (auto &[curLCM, len] : mp) {
        if (s.find(curLCM) == s.end()) // Nếu LCM không xuất hiện trong dãy
            ans = max(ans, len); // Cập nhật độ dài lớn nhất
    }

    cout << ans; // In kết quả
    return 0;
}