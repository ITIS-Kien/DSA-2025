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
        int cnt = 0;
        string s; cin >> s;
        stack <char> st;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(') st.push(s[i]);
            else if(st.size() && s[i] == ')'){
                st.pop();
                cnt += 2;
            }
        }
        cout << cnt << endl;
    }
    
    
}