#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA


void Try(vector <int> a, int n, int sum){
    stack <stack <int>> st;
    sort(a.begin(), a.end(), greater <int> ());
    for (int i = 0; i < (1 << n); i++){
        int tmp = 0;
        stack <int> res;
        for (int j = 0; j < n; j++) {
            if(i & (1 << j)) {
                tmp += a[j];
                res.push(a[j]);
            }
        }
        if(tmp == sum) st.push(res);
    }
    if(st.empty()) cout << "-1\n";
    else while (st.size())
    {
        cout << "[";
        stack <int> tmp = st.top(); st.pop();
        while (tmp.size())
        {
            cout << tmp.top(); tmp.pop();
            if(tmp.empty()) cout << "] ";
            else cout << " ";
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, sum; cin >> n >> sum;
        vector <int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        Try(a, n, sum);
        cout << "\n";
    }
    
}
