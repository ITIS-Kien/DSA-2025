#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int a[11][11], n, reach = 0;
string s;
void Try(int y, int x){
    if(a[1][1] == 0) return;
    if(x == n && y == n) {
        cout << s << " ";
        reach = 1;
    }
    else {
        if(a[y + 1][x]){
            s.push_back('D');
            Try(y + 1, x);
            s.pop_back();
        }
        if(a[y][x + 1]){
            s.push_back('R');
            Try(y, x + 1);
            s.pop_back();
        }
    }
}
int main(){
    int t; cin >> t; 
    while (t--)
    {
        reach = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++) cin >> a[i][j];
        }
        Try(1, 1);
        if(!reach) cout << -1;
        cout << endl;
    }
    
    
}
