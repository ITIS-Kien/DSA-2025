#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

// Custom comparator to sort by deadline in descending order
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

int main(){
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++)
        {
            int a, b, c; cin >> a >> b >> c;
            vp.push_back({b, c});
        }
        // Sort by deadline in descending order
        sort(vp.begin(), vp.end(), cmp);
        int maxDL = vp[0].first, res = 0, cnt = 0, idx = 0;
        priority_queue<int> pq;
        for (int i = maxDL; i >= 1; i--){
            while (idx < n && vp[idx].first >= i){
                pq.push(vp[idx].second);
                idx++;
            }
            if(!pq.empty()){
                res += pq.top();
                pq.pop();
                cnt++;
            }
        }
        cout << cnt << " " << res << endl;
    }
    
    
}
