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
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n], ans[n];
        for (int &it : a) cin >> it;
        ans[n - 1] = -1;
        stack <int> st;
        st.push(a[n - 1]);
        for (int i = n - 2; i >= 0; --i){
            if(st.size() && st.top() > a[i]){
                ans[i] = st.top();
                st.push(a[i]);
            }
            else{
                while(st.size() && st.top() <= a[i]) st.pop();
                if(st.size()) ans[i] = st.top();
                else ans[i] = -1;
                st.push(a[i]);
            }
        }
        for (int it : ans) cout << it << " ";
        cout << endl;
    }
    
}
// 