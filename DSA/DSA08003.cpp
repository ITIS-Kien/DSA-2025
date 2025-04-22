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
    deque <int> dq;
    while (t--)
    {
        string s; cin >> s;
        if(s == "PUSHBACK") {
            int x; cin >> x; dq.push_back(x);
        }
        if(s == "PUSHFRONT") {
            int x; cin >> x; dq.push_front(x);
        }
        if(s == "PRINTFRONT") {
            if(dq.empty()) cout << "NONE" << endl;
            else cout << dq.front() << endl;
        }
        if(s == "PRINTBACK") {
            if(dq.empty()) cout << "NONE" << endl;
            else cout << dq.back() << endl;
        }
        if(s == "POPFRONT" && dq.size()) dq.pop_front();
        if(s == "POPBACK" && dq.size()) dq.pop_back();

    }
        
    
    
}
