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
        int n, sum = 0; cin >> n;
        int a[n][n], f[n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) cin >> a[i][j];
        for (int i = 0; i < n; i++) f[i] = i;
        while (next_permutation(f, f + n))
        {
            int tmp = 0;
            for (int i = 0; i < n; i++)
            {
                tmp += a[i][f[i]];
            }
            sum = max(sum, tmp);
        }
        
        cout << sum << endl;
    }
    
    
}
