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
    while(t--){
        int n, m = 0; cin >> n;
        int a[n], f[n + 1];
        for (int &it : a) cin >> it;
        for (int i = 0; i < n; i++){
            f[i] = a[i];
            for (int j = 0; j < i; j++)
            {
                if(a[j] < a[i]) f[i] = max(f[i], f[j] + a[i]);
            }
            m = max(m, f[i]);
        }
        cout << m << endl;
    }
    
}
