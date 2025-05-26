#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int t = 1, n, k, a[20];

vector <vector <int>> ans;
void Try(int st = 0, vector <int> v = {}){
    if(v.size() == k){
        ans.push_back(v);
        return;
    }
    for(int i = st; i < n; i++){
        v.push_back(a[i]);
        Try(i + 1, v);
        v.pop_back();
    }
}
int main(){
    BOOST;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        Try();
        for(auto v : ans){
            for(int it : v) cout << it << ' ';
            cout << endl;
        }
        ans.clear();
    }
    
    
}