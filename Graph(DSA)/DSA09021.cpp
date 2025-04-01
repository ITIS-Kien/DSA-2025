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
    int n; cin >> n;
    int a[n + 1][n + 1];
    vector <priority_queue <int, vector <int> ,greater <int>>> p(n + 1);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if(a[i][j] == 1) {
                p[i].push(j);
                p[j].push(i);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        while (!p[i].empty())
        {
            cout << p[i].top() << " ";
            p[i].pop();
        }
        cout << endl;
    }
    
}
