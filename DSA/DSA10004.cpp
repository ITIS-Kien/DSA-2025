#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, m, deg[1001], used[1001];
set <int> a[1001];

void euler(int u){
    stack <int> st;
    vector <int> ec;
    st.push(u);
    while (ec.size())
    {
        int x = st.top();
        if(a[x].size()){
            int y = *a[x].begin();
            st.push(y);
            a[x].erase(y);
            a[y].erase(x);
        }
        else {
            st.pop();
            ec.push_back(x);
        }
    }
    for(int it : ec) cout << it << " ";
}
int main(){
    fast;
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        while(m--){
            int x, y; cin >> x >> y;
            // a[x].insert(y);
            // a[y].insert(x);
            ++deg[x];
            ++deg[y];
        }
        int cnt = 0;
        for(int i = 1; i <= n; ++i) cnt += deg[i] & 1;
        if(!cnt) cout << 2 << endl;
        else if(cnt == 2) cout << 1 << endl;
        else cout << 0 << endl;
        memset(deg, 0, sizeof(deg));
    }
    
}
