#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'

string maxResult;

void solve(string &s, int k, int idx) {
    if (k == 0) return;
    int n = s.size();
    char tmp = s[idx];
    for (int i = idx + 1; i < n; ++i) {
        if (s[i] > tmp) {
            tmp = s[i];
        }
    }
    if (tmp != s[idx]) --k; 
    for (int i = idx; i < n; ++i) {
        if (s[i] == tmp) {
            swap(s[idx], s[i]);
            maxResult = max(maxResult, s);
            solve(s, k, idx + 1);
            swap(s[idx], s[i]);
        }
    }
}

int main() {
    BOOST;
    int t; cin >> t;
    while (t--) {
        int k; cin >> k;
        string s; cin >> s;
        maxResult = s;
        solve(s, k, 0);
        cout << maxResult << endl;
    }
    return 0;
}