#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define nguyentukien ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int t = 1;
int f[30];
signed main(){
    nguyentukien
    cin >> t;
    while (t--)
    {
        memset(f, 0, sizeof(f));
        ll ans = 0;
        int k; cin >> k;
        string s; cin >> s;
        priority_queue <int> pq;
        for (char it : s) ++f[it - 'A'];
        for (int it : f) if(it) pq.push(it);
        while (k--)
        {
            int it = pq.top(); pq.pop();
            --it; pq.push(it);
        }
        while(pq.size()){
            int it = pq.top(); pq.pop();
            ans += 1ll * it * it;
        }
        cout << ans << endl;
            
    }
    
    
}