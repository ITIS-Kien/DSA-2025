#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define endl "\n"
using namespace std;

int n, k;
string s;
vector <string> res;
void Subset() {
    for (int i = 0; i < (1 << n); i++){
        string tmp = "";
        int check = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) {
                tmp += s[j];
                check = 1;
            }
        }
        if(check) res.push_back(tmp);
    }
}

int main() {
    fast;
    int t; cin >> t;
    while (t--) {
        cin >> n >> s;
        Subset();
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
        res.clear();
    }
}