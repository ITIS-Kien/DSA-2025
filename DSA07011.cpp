#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    fast;
    int t; cin >> t;
    while (t--)
    {
        stack <string> st;
        string s; cin >> s;
        for (char it : s){
            if(it >= 'A' && it <= 'Z'){
                st.push(string(1, it));
            }
            else{
                string s1 = st.top(); st.pop();
                string s2 = st.top(); st.pop();
                string ss = string(1, it) + s2 + s1;
                st.push(ss);
            }
        }
        cout << st.top() << endl;
    }
    
}
