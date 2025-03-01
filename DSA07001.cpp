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
    string s; int x;
    stack <int> st;
    while (cin >> s)
    {
        if(s == "push"){
            cin >> x;
            st.push(x);
        }
        if(s == "pop" && !st.empty()){
            st.pop();
        }
        if(s == "show"){
            if(st.empty()) cout << "empty" << endl;
            else{
                stack <int> tmp = st;
                vector <int> res;
                while (!tmp.empty())
                {
                    res.push_back(tmp.top());
                    tmp.pop();
                }
                for (int i = res.size() - 1; i >= 0; i--)
                {
                    cout << res[i] << " ";
                }
                cout << endl;
            }
        }

    }
}