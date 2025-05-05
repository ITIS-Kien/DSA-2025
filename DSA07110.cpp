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
    while (t--)
    {
        string s; cin >> s;
        stack <char> st;
        int check = 1;
        for (char c : s){
            if(c == '(' || c == '[' || c == '{') st.push(c);
            else{
                if(st.empty()){
                    cout << "NO" << endl;
                    check = 0;
                    break;
                }
                if(c == ')' && st.top() == '(') st.pop();
                else if(c == ']' && st.top() == '[') st.pop();
                else if(c == '}' && st.top() == '{') st.pop();
                else{
                    cout << "NO" << endl;
                    check = 0;
                    break;
                }
            }
        }
        if(check) cout << "YES" << endl;
    }
    
    
}
