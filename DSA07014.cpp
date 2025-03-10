#include <bits/stdc++.h>
#include<stack>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

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
        reverse(s.begin(), s.end());
        stack <int> st;
        for (auto it : s)
        {
            if(it == '+' || it == '-' || it == '*' || it == '/'){
                int s2 = st.top(); st.pop();
                int s1 = st.top(); st.pop();
                int s3 = calcu(s2, s1, it);
                st.push(s3);
            }
            else st.push(it - '0');
        }
        
        cout << st.top() << "\n";
    }
}