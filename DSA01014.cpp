#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#pragma GCC optimize("Ofast")

int n, k, s, cnt = 0;
void backtrack(int i = 0, int st = 1, int sum = 0){
    if(i == k) cnt += sum == s;
    else {
        for (int j = st; j <= n - k + i + 1; ++j){
            backtrack(i + 1, j + 1, sum + j);   
        }
    }
}
int main(){
    fast;
    while (true)
    {
        cin >> n >> k >> s;
        if(n + k + s == 0) return 0;
        if(s < (k * (k + 1) / 2)) cout << 0 << endl;
        else if(s > (n + n - k + 1) * k / 2) cout << 0 << endl;
        else{
            cnt = 0;
            backtrack();
            cout << cnt << endl;
        }
    }
    
}
