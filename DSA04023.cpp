#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define nguyentukien ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int t = 1, n, k, a[10004];

signed main(){
    nguyentukien
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n);
        
        ll cnt = 0;
        int r = 1;
        for (int l = 0; l < n-1; ++l) {
            while (r < n && a[r] - a[l] < k) {
                r++;
            }
            cnt += r - l - 1;
        }
        
        cout << cnt << endl;
    }
} 