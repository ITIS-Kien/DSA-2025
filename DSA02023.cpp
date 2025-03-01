#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA
int n, k;
vector <string> st;
void Try(int p, int s, vector <string> in){
    if(p == k) {
        for (string it : st) cout << it << " ";
        cout << endl;
    }
    else {
        for (int i = s; i < n; i++)
        {
            st.push_back(in[i]);
            Try(p + 1, i + 1, in);
            st.pop_back();
        }
    }
}
int main(){
    cin >> n >> k;
    set <string> ss;
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        ss.insert(x);
    }
    vector <string> in(ss.begin(), ss.end());
    n = in.size();
    Try(0, 0, in);
}
