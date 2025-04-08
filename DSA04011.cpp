#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll binary(string s){
    ll res = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); ++i){
        if(s[i] == '1') res += (1 << i);
    }
    return res;
}

int main() {
    fast;
    int t; cin >> t;
    while(t--){
        string s1, s2; cin >> s1 >> s2;
        ll n = binary(s1), m = binary(s2);
        cout << (n * m) << endl;

    }
}