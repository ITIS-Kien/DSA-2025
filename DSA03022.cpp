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
    int n; cin >> n;
    int a[n], m = 0;
    for (int &it : a) cin >> it;
    sort(a, a + n);
    if(a[0] * a[1] > m) m = a[0] * a[1];
    if(a[n - 1] * a[n - 2] > m) m = a[n - 1] * a[n - 2];
    if(a[0] * a[1] * a[n - 1] > m) m = a[0] * a[1] * a[n - 1];
    if(a[0] * a[1] * a[2] > m) m = a[0] * a[1] * a[2];
    if(a[n - 1] * a[n - 2] * a[n - 3] > m) m = a[n - 1] * a[n - 2] * a[n - 3];
    if(a[n - 1] * a[n - 2] * a[0] > m) m = a[n - 1] * a[n - 2] * a[0];
    cout << m << endl;
}
 