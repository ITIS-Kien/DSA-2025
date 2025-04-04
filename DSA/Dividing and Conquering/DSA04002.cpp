#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

inline ll rev(ll n) {
    ll res = 0;
    while(n) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

inline ll binPow(ll n, ll p) {
    if(p == 1) return n;
    ll res = binPow(n, p >> 1) % mod;
    res = (res * res) % mod;
    if(p & 1) res = (res * n) % mod;
    return res % mod;
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        cout << binPow(n, rev(n)) << endl;
    }
}
