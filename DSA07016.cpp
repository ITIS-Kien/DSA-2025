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
        stack <char> st;
        st.push('1');
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'I'){
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                }
            }
            st.push(i + '2');
        }
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}