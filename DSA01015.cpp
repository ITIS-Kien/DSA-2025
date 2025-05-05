#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#pragma GCC optimize("Ofast")

int main() {
    fast;
    vector<ll> v; // Changed from vl to vector<ll>
    ll tmp = 9;
    v.push_back(tmp);

    while (tmp * 10 <= 9000000999999) {
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
        int n;
        cin >> n;
        int idx = 0;
        while (v[idx] % n != 0) {
            ++idx;
        }
        cout << v[idx] << endl;
    }

    return 0;
}