#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

ll f[1001][1001];
void ChinhHop(){
    for (int i = 1; i <= 1000; i++)
    {
        f[i][1] = i;
        for (int j = 2; j <= i; j++)
            f[i][j] = (f[i][j - 1] * (i - j + 1)) % mod;
    }
}
int main(){
    int t; cin >> t;
    ChinhHop();
    while (t--)
    {
        int n, k; cin >> n >> k;
        cout << f[n][k] << endl;
    }
    
    
}
