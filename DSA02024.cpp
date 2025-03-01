#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA


void Try(vector <int> a, int n){
    vector <string> res;
    for (int i = 0; i < (1 << n); i++){
        int check = 1;
        string s = "";
        vector <int> tmp;
        for (int j = 0; j < n; j++) {
            if(i & (1 << j)) {
                if(!tmp.size() || a[j] > tmp.back()) tmp.push_back(a[j]);
                else {
                    check = 0;
                    break;
                }
            }
        }
        if(check && tmp.size() > 1){
            for (int it : tmp) s += to_string(it) + " ";
            res.push_back(s);
        }
    }
    sort(res.begin(), res.end());
    for(string it : res) cout << it << endl;
}
int main(){
    int n; cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    Try(a, n);    
}
