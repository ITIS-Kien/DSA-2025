#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int p[3] = {0, 1, 2};
int l[3], r[3];

int main() {
    fast;
    int n;
    ll sum = 0;
    cin >> n;
    vector<vector<ll>> a(3, vector<ll>(n));
    
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            if(!i) sum += a[i][j];
        }
    }
    int found = false;
    do {
        ll tmp = 0;
        
        l[p[0]] = 0;
        for (r[p[0]] = l[p[0]]; r[p[0]] < n; ++r[p[0]]) {
            tmp += a[p[0]][r[p[0]]];
            if (tmp >= (sum + 2) / 3) break;
        }
        l[p[1]] = r[p[0]] + 1;
        if (l[p[1]] >= n) continue;
        tmp = 0;
        for (r[p[1]] = l[p[1]]; r[p[1]] < n; ++r[p[1]]) {
            tmp += a[p[1]][r[p[1]]];
            if (tmp >= (sum + 2) / 3) break;
        }
        l[p[2]] = r[p[1]] + 1;
        if (l[p[2]] >= n) continue;
        tmp = 0;
        for (r[p[2]] = l[p[2]]; r[p[2]] < n; ++r[p[2]])
            tmp += a[p[2]][r[p[2]]];
        if (tmp < (sum + 2) / 3) continue;
        
        cout << l[0] + 1 << " " << r[0] + !(r[0] == n) << " "
             << l[1] + 1 << " " << r[1] + !(r[1] == n) << " "
             << l[2] + 1 << " " << r[2] + !(r[2] == n) << endl;
        found = true;
        break;
    } while (next_permutation(p, p + 3));

    if (!found) cout << -1 << endl;
}
