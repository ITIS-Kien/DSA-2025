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
    int n; cin >> n; cin.ignore();
    int f[n + 1][n + 1];
    memset(f, 0, sizeof(f));
    for(int i = 1; i <= n; i++){
        string s, r; getline(cin, s);
        stringstream ss(s);
        while (ss >> r){
            int j = stoi(r);
            f[i][j] = f[j][i] = 1;
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
    
}
