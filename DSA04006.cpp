#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MOD 1000000007
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#pragma GCC optimize("Ofast")

ll len[55];

inline int Find(int h, ll n, ll i) {
    if (h == 1) return n & 1; // Nếu chỉ còn 1 bit, trả về bit cuối cùng
    ll tmp = len[h - 1];
    if (i == tmp + 1) return n & 1; // Nếu i nằm ở giữa, trả về bit hiện tại
    if (i <= tmp) return Find(h - 1, n >> 1, i); // Nếu i nằm ở nửa trái
    return Find(h - 1, n >> 1, i - tmp - 1); // Nếu i nằm ở nửa phải
}

int main() {
    BOOST;
    int t; cin >> t;
    while (t--) {
        ll n, l, r;
        cin >> n >> l >> r;

        // Tính độ dài của các tầng
        len[1] = 1;
        ll tmp = n >> 1;
        int h = 2;
        while (tmp) {
            len[h] = (len[h - 1] << 1) + 1;
            ++h;
            tmp >>= 1;
        }

        // Tính tổng các giá trị từ l đến r
        ll ans = 0;
        for (ll i = l; i <= r; ++i) {
            ans += Find(h - 1, n, i);
        }
        cout << ans << endl;
    }
    return 0;
}