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
    int t, x; cin >> t;
    string s;
    stack <int> st;
    while (t-- && cin >> s)
    {
        if(s == "PUSH"){
            cin >> x;
            st.push(x);
        }
        if(s == "POP" && !st.empty()){
            st.pop();
        }
        if(s == "PRINT"){
            if(st.empty()) cout << "NONE" << endl;
            else cout << st.top() << endl;
        }

    }
}