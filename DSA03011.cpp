#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int t = 1;

int main(){
    BOOST;
    cin >> t;
    while (t--)
    {
        int n, res = 0; cin >> n;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            pq.push(x);
        }
        while (pq.size() > 1){
            int x = pq.top() % MOD; pq.pop();
            int y = pq.top() % MOD; pq.pop();
            pq.push((x + y) % MOD);
            res = (res + (x + y) % MOD) % MOD;
        }
        cout << res << endl;
    }
    
    
}