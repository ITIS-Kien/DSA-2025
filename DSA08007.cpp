#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int main() {
    BOOST;
    vector<ll> v;
    ll tmp = 1;
    v.push_back(tmp);
    while (tmp * 10 <= 1e17) {
        int s = v.size();
        tmp *= 10;
        v.push_back(tmp);
        for (int i = 0; i < s; ++i) {
            v.push_back(tmp + v[i]);
        }
    }
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        auto it = upper_bound(v.begin(), v.end(), n);
        cout << (it - v.begin()) << endl;
    }
    return 0;
}
