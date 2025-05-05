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
    int n; cin >> n;
    cin.ignore();
    set <pair <int, int>> ans;
    for (int i = 1; i <= n; i++){
        string s, r; getline(cin, s);
        stringstream ss(s);
        while(ss >> r){
            int u = stoi(r);
            ans.insert({min(i, u), max(i, u)});
        }
    }
    for (auto it : ans) cout << it.first << " " << it.second << endl;
}
