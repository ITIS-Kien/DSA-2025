#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;



int main(){
    BOOST;
    int t = 1; 
    cin >> t;
    while (t--)
    {
        int n, mark[30] = {0};
        ll sum = 0; cin >> n;
        string s; cin >> s;
        for(int i = 0; i < s.size(); ++i) ++mark[s[i] - 'A'];
        priority_queue<int> q;
        for(int i = 0; i < 26; ++i) if(mark[i]) q.push(mark[i]);
        while (n--) {
            int x = q.top(); q.pop();
            if(x > 1) q.push(x - 1);
        }
        while (!q.empty()){
            int x = q.top(); q.pop();
            sum += 1ll * x * x;
        }
        cout << sum << endl;    
    }
}