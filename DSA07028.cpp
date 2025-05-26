#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int t = 1;

int main(){
    BOOST;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        stack <pair <int, int>> st;
        pair <int, int> a[n];
        for (auto &it : a) {
            cin >> it.first;
            it.second = 1;
            while(st.size() and st.top().first <= it.first){
                it.second += st.top().second;
                st.pop();
            }
            st.push(it);
        }
        for (auto it : a) cout << it.second << ' ';
        cout << endl;

    }
    
    
}