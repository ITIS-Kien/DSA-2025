#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int a[11][11], n, m, cnt;
vector <int> s;
void Try(int y, int x){
    if(x == m && y == n) cnt++;
    else {
        if(y < n) {
            s.push_back(a[y + 1][x]);
            Try(y + 1, x);
            s.pop_back();
        }
        if(x < m){
            s.push_back(a[y][x + 1]);
            Try(y, x + 1);
            s.pop_back();
        }
    }
}
int main(){
    int t; cin >> t; 
    while (t--)
    {
        cnt = 0;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++) cin >> a[i][j];
        }
        Try(1, 1);
        cout << cnt << endl;
    }
    
    
}
