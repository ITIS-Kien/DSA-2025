#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, k;
    cin >> n >> k;
    map<long long, long long> m;
    m[n] = 1;
    while(k--) {
        auto it = m.rbegin();
        long long a = it->first;
        m.erase(a);
        long long l = a / 2;
        r = l + a % 2;
        k -= b;
    }
    cout << << " " << "\n";
}