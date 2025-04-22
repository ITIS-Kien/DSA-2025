#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll binPow(ll a, ll b) {
    if (b == 0) return 1;
    ll res = binPow(a, b / 2);
    res = (res * res) % MOD;
    if (b & 1) res = (res * a) % MOD;
    return res;
}

int main() {
    BOOST;
    ll n, m = 1; 
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, int> freq;

    for (ll &it : a) {
        cin >> it;
        ++freq[it];
    }

    const int mod_2phi = 2 * (MOD - 1);
    for (auto &[p, cnt] : freq) {
        m = (m * (cnt + 1)) % mod_2phi;
    }

    ll ans = 1;
    for (auto &[p, cnt] : freq) {
        ll exponent = ( (cnt % mod_2phi) * (m % mod_2phi) ) % mod_2phi;
        exponent = exponent / 2; 
        exponent %= (MOD - 1); 
        ans = (ans * binPow(p, exponent)) % MOD;
    }

    cout << ans;
    return 0;
}
