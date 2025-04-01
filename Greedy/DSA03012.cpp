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
        int d, check = 1; cin >> d;
        string s; cin >> s;
        map <char, int> mp;
        for (char it : s) {
            if(mp[it] * d + 1 > s.size()){
                check = 0;
                break;
            }
            mp[it]++;
        }
        if(check) cout << 1 << endl;
        else cout << -1 << endl;
    }
        
    
}
