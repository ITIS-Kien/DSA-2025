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
    vector <int> a(n), f(1000007, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int k; cin >> k;
    for (int i = 0; i < n; i++)
    {
        if(!f[a[i]]) {
            cout << a[i] << " ";
            f[a[i]] = 1;
        }
    }

}
