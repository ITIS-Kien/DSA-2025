#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll sum_even = 0;
        ll max_odd = -1;
        ll max_all = 0;
        bool has_even = false;
        bool has_odd = false;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            max_all = max(max_all, a[i]);
            if (a[i] % 2 == 0) {
                sum_even += a[i];
                has_even = true;
            } else {
                if (a[i] > max_odd) {
                    max_odd = a[i];
                }
                has_odd = true;
            }
        }
        if (has_even && has_odd) {
            cout << sum_even + max_odd << endl;
        } else {
            cout << max_all << endl;
        }
    }
    return 0;
}