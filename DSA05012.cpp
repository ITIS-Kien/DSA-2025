#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

ll f[1005][1005];
void ToHop(){
    for(int i = 0; i <= 1000; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i) f[i][j] = 1;
            else f[i][j] = (f[i - 1][j - 1] + f[i - 1][j]) % mod;
        }
    }
}
int main(){
    int t; cin >> t;
    ToHop();
    while (t--){
        int n, k; cin >> n >> k;
        cout << f[n][k] << endl;}
    
}
