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
    while (t--){
        int n, m; cin >> n >> m;
        int a[n], b[m], f[100005];
        memset(f, 0, sizeof(f));
        set <int> un;
        set <int> it;
        for (int &i : a){
            cin >> i;
            f[i]++;
            un.insert(i);
        }
        for (int &i : b){
            cin >> i;
            un.insert(i);
            if(f[i]) it.insert(i);
        }
        for (int i : un) cout << i << " ";
        cout << endl;
        for (int i : it) cout << i << " ";
        cout << endl;
    }    
    
}
