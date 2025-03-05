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
        int v, e; cin >> v >> e;
        vector <vector <int>> a(v + 1);
        while (e--)
        {
            int x, y; cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 1; i <= v; i++)
        {
            cout << i << ": ";
            sort(a[i].begin(), a[i].end());
            for (int it : a[i]) cout << it << " ";
            cout << endl;
        }
    }
    
    
}
