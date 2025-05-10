#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'

int n, res = INT_MAX;
string a[11];
bool visited[11];

int overlap(const string &s1, const string &s2) {
    int cnt = 0;
    for (char c : s1) {
        if (s2.find(c) != string::npos) {
            ++cnt;
        }
    }
    return cnt;
}
void backtrack(int idx, int total, int last) {
    if (total >= res) return;
    if (idx == n) {
        res = min(res, total);
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            visited[i] = true;
            int overlapCount = (last == -1) ? 0 : overlap(a[last], a[i]);
            backtrack(idx + 1, total + overlapCount, i);
            visited[i] = false;
        }
    }
}

int main() {
    BOOST;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    memset(visited, false, sizeof(visited));
    backtrack(0, 0, -1);
    cout << res << endl;
    return 0;
}

