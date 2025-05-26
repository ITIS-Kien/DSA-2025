#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int t = 1, ans = INT_MAX;

void Try(int n, int cnt = 0){
    if(cnt >= ans) return; // Nhánh cận: nếu số bước hiện tại đã >= kết quả tốt nhất, dừng ngay
    
    if(n == 1){
        ans = min(ans, cnt);
        return;
    }
    if(n % 3 == 0) Try(n / 3, cnt + 1);
    if(n % 2 == 0) Try(n / 2, cnt + 1);
    Try(n - 1, cnt + 1);
}


int main(){
    BOOST;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        Try(n);
        cout << ans << endl;
        ans = INT_MAX;
    }
    
    
}