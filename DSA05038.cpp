<<<<<<< HEAD
/* STOLEN */

#include <bits/stdc++.h>
#define ll long long
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define MOD 1000000007

using namespace std;
int t = 1;
vector<map<int, int>> dp;

bool check(int mid, int x, int y){
    auto it = dp[mid].lower_bound(x);
    return it != dp[mid].begin() and (--it)->second < y;
}

void Add(int l, int x, int y){
    auto it = dp[l].lower_bound(x);
    auto ori = it;
    while(it != dp[l].end() and (*it).second >= y)
        ++it;
    dp[l].erase(ori, it);
    dp[l][x] = y;
}

int main(){
    boost;
    int x, y, res = 0, l, r, mid;
    cin >> t;
    dp.resize(t);
    Add(0, INT_MIN, INT_MIN);
    while(t--){
        cin >> x >> y;
        l = 0;
        r = res;
        while(l <= r){
            mid = (l + r) >> 1;
            if(check(mid, x, y)) l = mid + 1;
            else r = mid - 1;
        }
        if(res == l - 1) res = l;
        Add(l, x, y);
    }
    cout << res;
}

/*
    Tạo một vector map để lưu tất cả các giá trị dãy con tăng dần (LIS)
    Sử dụng tìm kiếm nhị phân để tìm giá trị lớn hơn bằng x
    Sau đó check tiếp xem y có có nhỏ hơn để tạo thành dãy tăng dần hay không
*/
=======
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
    int n, m = 0; cin >> n;
    vector <pair <int, int>> a(n);
    int f[n + 1];
    for (auto &it : a) cin >> it.first >> it.second;
    for (int i = 0; i < n; i++){
        f[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if(a[j].first < a[i].first && a[j].second < a[i].second) f[i] = max(f[i], f[j] + 1);
        }
        m = max(m, f[i]);
    }
    cout << m;
}
>>>>>>> ad4484823126a368973abacfb49a4345f0e671d7
