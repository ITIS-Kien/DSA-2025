#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll calcu(ll a, ll b, string x){
    if(x == "+") return a + b;
    if(x == "-") return a - b;
    if(x == "*") return a * b;
    if(x == "/") return a / b;
}


int main() {
    fast;
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        stack <ll> st;
        for (int i = 0; i < n; ++i)
        {
            string it; cin >> it;
            if(it == "+" || it == "-" || it == "*" || it == "/"){
                ll s1 = st.top(); st.pop();
                ll s2 = st.top(); st.pop();
                ll s3 = calcu(s2, s1, it);
                st.push(s3);
            }
            else st.push(stoll(it));
        }
        
        cout << st.top() << "\n";
    }
}