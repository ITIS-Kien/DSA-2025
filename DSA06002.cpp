#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
// ITIS LA NHA

int n, k;

bool cmp(int a, int b) {
    return abs(k - a) < abs(k - b);
}

int main() {
    fast;
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> a(n); // Sử dụng vector thay vì mảng tĩnh
        for (int i = 0; i < n; i++) cin >> a[i];
        stable_sort(a.begin(), a.end(), cmp);
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}