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
        int n, k, cnt = 0; cin >> n >> k;
        int a[n];
        for (int &it : a) cin >> it;
        sort(a, a + n);
        for (int i = 0; i < n; i++){
            int tmp = upper_bound(a, a + i, k - a[i]) - lower_bound(a, a + i, k - a[i]);
            cnt += tmp;
        }
        cout << cnt<< endl;
    }
    
    
}
