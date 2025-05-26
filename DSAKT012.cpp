#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int n, k, a[35], res = INT_MAX;
void BackTrack(int idx = 0, int cnt = 0, int sum = 0){
    if(idx == n){
        if(sum == k) res = min(res, cnt);
        return;
    }
    for(int i = 0; i < n; ++i){
        BackTrack(idx + 1, cnt, sum);
        if(sum + a[i] <= k)  BackTrack(idx + 1, cnt + 1, sum + a[i]);
    }
}

int main(){
    BOOST;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n, greater <int> ());
    BackTrack();
    cout << res;
}