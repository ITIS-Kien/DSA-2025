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
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        if(k > n / 2) k = n - k;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < k; i++) sum1 += a[i];
        for (int i = k; i < n; i++) sum2 += a[i];
        cout << sum2 - sum1 << endl;
    }
}
