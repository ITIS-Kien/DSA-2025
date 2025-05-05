#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int a[11][11], used[11][11], n, reach = 0;
string s;
void Try(int y, int x, string s){
    if(x == n && y == n) {
        cout << s << " ";
        reach = 1;
    }
    else {
        if(a[y + 1][x] && used[y + 1][x]){
            used[y][x] = 0;
            Try(y + 1, x, s + "D");
            used[y][x] = 1;
        }
        if(a[y][x - 1] && used[y][x - 1]){
            used[y][x] = 0;
            Try(y, x - 1, s + "L");
            used[y][x] = 1;
        }
        if(a[y][x + 1] && used[y][x + 1]){
            used[y][x] = 0;
            Try(y, x + 1, s + "R");
            used[y][x] = 1;
        }
        if(a[y - 1][x] && used[y - 1][x]){
            used[y][x] = 0;
            Try(y - 1, x, s + "U");
            used[y][x] = 1;
        }
    }
}
int main(){
    int t; cin >> t; 
    while (t--)
    {
        reach = 0;
        cin >> n;
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j) {
                cin >> a[i][j];
                used[i][j] = 1;
            }
        }
        if(a[1][1]) Try(1, 1, "");
        if(!reach) cout << -1;
        cout << endl;
    }
    
    
}
