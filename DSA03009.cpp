#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA
bool cmp(pair<int, int> a, pair<int, int> b) { 
    if(a.first == b.first) return a.second > b.second;
    return a.first < b.first; 
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
        sort(vp.begin(), vp.end(), cmp);
        int res = vp[0].second, k = 0, cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if(vp[i].first > vp[k].first){
                res += vp[i].second;
                k = i;
                ++cnt;
            }
        }
        cout << cnt << " " << res << endl;
    }
    
    
}
