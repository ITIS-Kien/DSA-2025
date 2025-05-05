#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

vector <int> a1, a2;
int n;
int find (int l, int r){
    int mid = (l + r) / 2;
    if (l == r) return l + 1;
    if (a1[mid] == a2[mid]) return find(mid + 1, r);
    else return find(l, mid);
}
int main(){
    int t; cin >> t;
    while (t--){
        cin >> n; 
        a1.clear(); a2.clear();
        a1.resize(n); a2.resize(n - 1);
        for (int &it : a1) cin >> it;
        for (int &it : a2) cin >> it;
        cout << find(0, n - 1) << endl;
    }
    
}
