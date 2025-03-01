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
        int n, s, m; cin >> n >> s >> m;
        int ex = 0, im = 0, lack = 0;
        for (int i = 1; i <= s; i++)
        {
            if(i % 7 != 0) im += n;
            ex += m;
            if(ex > im){
                lack = 1;
                break;
            }
        }
        if(lack) cout << -1 << endl;
        else cout << (ex + n - 1) / n << endl;
    } 
}
