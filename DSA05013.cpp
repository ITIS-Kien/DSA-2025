#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int f[100001];
void Stair(int n, int k){
    memset(f, 0, sizeof(f));
    f[0] = f[1] = 1;
    for (int i = 2; i < k; i++){
        for(int j = 0; j < i; j++) f[i] = (f[i] + f[j]) % mod;
    }
    for (int i = k; i <= n; i++)
    {
        for (int j = i - k; j < i; j++) f[i] = (f[i] + f[j]) % mod;
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        Stair(n, k);
        cout << f[n] << endl;
    }
    
    
}
