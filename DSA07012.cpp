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
        string s; cin >> s;
        // reverse(s.begin(), s.end());
        stack <string> st;
        for (char it : s){
            if('A' <= it && it <= 'Z') st.push(string(1, it));
            else {
                string s1 = st.top(); st.pop();
                string s2 = st.top(); st.pop();
                st.push("(" + s2 + string(1, it) + s1 + ")");
            }
        }
        cout << st.top() << endl;
    }
}