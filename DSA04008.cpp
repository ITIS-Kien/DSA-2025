#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MOD 1000000007
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#pragma GCC optimize("Ofast")

unordered_map <int, ll> F;
inline ll fibo(int n){
    if(F[n]) return F[n];
    int k = n >> 1;
    if(n & 1) return F[n] = (fibo(k + 1) * fibo(k + 1) + fibo(k) * fibo(k)) % MOD;
    return F[n] = (fibo(k + 1) * fibo(k) + fibo(k) * fibo(k - 1)) % MOD;
}

int main(){
    BOOST;
    F[0] = 0; F[1] = F[2] = 1;
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        cout << fibo(n) << endl;
    }
    return 0;
    
}
