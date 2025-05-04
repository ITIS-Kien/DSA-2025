#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int n, w, a[101], c[101], FOPT = 0;
vector <int> XOPT(101, 0), tmp(101, 0);

void Try(int u, int sum = 0, int wei = 0){
    if(wei > w) return;
    if(u == n){
        if(sum > FOPT){
            FOPT = sum;
            XOPT = tmp;
        }
        return;
    }
    tmp[u] = 0;
    Try(u + 1, sum, wei);
    tmp[u] = 1;
    Try(u + 1, sum + a[u], wei + c[u]);
}

int main(){
    BOOST;
    cin >> n >> w;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> c[i];
    Try(0);
    cout << FOPT << endl;
    for (int i = 0; i < n; ++i) cout << XOPT[i] << " ";
    cout << endl;
}