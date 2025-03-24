#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA
char a[105][105];
int n, m, cnt = 0;

int main(){
    cin >> n >> m;
    memset(a, '.', sizeof(a));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if(a[i][j] == '#' && a[i - 1][j] != '#' && a[i][j - 1] != '#') ++cnt;
        }
    }
    cout << cnt;
}
