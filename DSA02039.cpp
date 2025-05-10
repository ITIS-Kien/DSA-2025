#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

vector <vector <int>> res;
void Try(int n, int st, vector<int>& ans) {
    if (n == 0) {
        res.push_back(ans);
        
        return;
    }
    for (int i = st; i >= 1; --i) {
        ans.push_back(i);
        Try(n - i, min(n - i, i), ans);
        ans.pop_back();
    }
}

int main() {
    fast;
    int t = 1; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> ans;
        Try(n, n, ans);
        cout << res.size() << endl;
        for (auto ans : res){
            cout << "(";
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i] << (i == ans.size() - 1 ? ") " : " ");
            }
        }
        cout << endl;
        res.clear();
    }
}