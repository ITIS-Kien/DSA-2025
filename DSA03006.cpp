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
        int n; cin >> n;
        int a[n + 1], check = 1;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            if(a[i] != i && a[i] != n - i + 1) check = 0;
        }
        if(check) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    
}
