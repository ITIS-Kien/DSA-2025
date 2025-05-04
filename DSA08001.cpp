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
    int T; cin >> T;
    while (T--)
    {
        int t; cin >> t;
        deque <int> dq;
        while (t--)
        {
            int n; cin >> n;
            if(n == 1) cout << dq.size() << endl;
            if(n == 2) cout << (dq.empty() ? "YES" : "NO") << endl;
            if(n == 3) {
                int x; cin >> x; dq.push_back(x);
            }
            if(n == 4) {
                if(dq.size()) dq.pop_front();
            }
            if(n == 5) {
                cout << (dq.empty() ? -1 : dq.front()) << endl;
            }
            if(n == 6) {
                cout << (dq.empty() ? -1 : dq.back()) << endl;
            }
        }
    }
        
    
    
}
