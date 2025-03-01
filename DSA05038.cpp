#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int main(){
    int n, m = 0; cin >> n;
    vector <pair <int, int>> a(n);
    int f[n + 1];
    for (auto &it : a) cin >> it.first >> it.second;
    for (int i = 0; i < n; i++){
        f[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if(a[j].first < a[i].first && a[j].second < a[i].second) f[i] = max(f[i], f[j] + 1);
        }
        m = max(m, f[i]);
    }
    cout << m;
}
