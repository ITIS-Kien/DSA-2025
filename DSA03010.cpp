#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int main(){
    int t; cin >> t;
    while (t--)
    {
        priority_queue <int, vector <int>, greater <int>> q;
        int n; cin >> n;
        while (n--){
            int x; cin >> x;
            q.push(x);
        }
        ll res = 0;
        while(q.size() > 1){
            int a = q.top(); q.pop();
            int b = q.top(); q.pop();
            res += a + b;
            q.push(a + b);
        }
        cout << res << endl;
    }
    
    
}
