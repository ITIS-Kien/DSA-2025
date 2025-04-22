#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int calcu(int a, int b, char x){
    if(x == '+') return a + b;
    if(x == '-') return a - b;
    if(x == '*') return a * b;
    if(x == '/') return a / b;
}

int main() {
    fast;
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack <ll> st;
        for (auto it : s)
        {
            if(it == '+' || it == '-' || it == '*' || it == '/'){
                int s1 = st.top(); st.pop();
                int s2 = st.top(); st.pop();
                int s3 = calcu(s2, s1, it);
                st.push(s3);
            }
            else st.push(it - '0');
        }
        
        cout << st.top() << "\n";
    }
}