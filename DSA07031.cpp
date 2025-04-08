#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#pragma GCC optimize("Ofast")

string calc(string a, string b, string op){
    if(op == "+") return to_string(stoll(a) + stoll(b));
    if(op == "-") return to_string(stoll(a) - stoll(b));
    if(op == "*") return to_string(stoll(a) * stoll(b));
    if(op == "/") return to_string(stoll(a) / stoll(b));
}
int main(){
    fast;
    int t = 1; cin >> t;
    cin.ignore();
    while (t--)
    {
        int n; cin >> n;
        cin.ignore();
        string a[n];
        for (string &it : a) cin >> it;
        reverse(a, a + n);
        stack <string> st;
        for (string it : a){
            if(it == "+" || it == "-" || it == "*" || it == "/"){
                string b = st.top(); st.pop();
                string c = st.top(); st.pop();
                string res = calc(b, c, it);
                st.push(res);
            } else {
                st.push(it);
            }
        }
        cout << st.top() << endl;
    }
    
}
