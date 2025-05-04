#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
// ITIS LA NHA

void Direct_Sort(int a[], int n) {
    int turn = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i])  swap(a[j], a[i]);
        }
        cout << "Buoc " << turn++ << ": ";
        for (int j = 0; j < n; j++) cout << a[j] << " ";
        cout << endl;
    }
}
int main() {
    fast;
    int t; t = 1;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Direct_Sort(a, n);
    }
}