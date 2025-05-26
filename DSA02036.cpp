#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;
int t = 1, n, a[20];
vector <vector <int>> ans;
void Try(int i = 0, int sum = 0, vector <int> v = {}){
    if(i == n){
        if(sum & 1){
            ans.push_back(v);
        }
        return;
    }
    Try(i + 1, sum, v);
    v.push_back(a[i]);
    Try(i + 1, sum + a[i], v);
}


int main(){
    BOOST;
    cin >> t;
    while (t--)
    {
        ans.clear();
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n, greater<int>());
        Try(0);
        sort(ans.begin(), ans.end());
        for (auto v : ans){
            for (int it : v) cout << it << ' ';
            cout << endl;
        }
    }
}