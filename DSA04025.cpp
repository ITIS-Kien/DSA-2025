#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

unordered_map <ll, ll> f;

ll fibo(ll n){
    if(f[n]) return f[n];
    ll k = n / 2;
    if(n & 1) return f[n] = (fibo(k + 1) * fibo(k + 1) + fibo(k) * fibo(k)) % mod;
    else return f[n] = (fibo(k + 1) * fibo(k) + fibo(k) * fibo(k - 1)) % mod; 
}
int main(){
    int t, n; cin >> t;
    f[0] = 0;
    f[1] = f[2] = 1;
    while (t--)
    {
        cin >> n;
        cout << fibo(n) << endl;
    }
}
