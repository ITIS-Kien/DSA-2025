#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int V, E, degIn[1001], degOut[1001];

bool checkEuler(){
    int cnt = 0;
    for (int i = 1; i <= V; ++i) {
        cnt += (abs(degIn[i] - degOut[i]) == 1);
        if(cnt > 2 or abs(degIn[i] - degOut[i]) > 1 or !degIn[i] or !degOut[i]) return 0;
    }
    return 1;
}
int main(){
    BOOST;
    int t; cin >> t;
    while (t--)
    {
        memset(degIn, 0, sizeof(degIn));
        memset(degOut, 0, sizeof(degOut));
        cin >> V >> E;
        while (E--)
        {
            int x, y; cin >> x >> y;
            ++degOut[x];
            ++degIn[y];
        }
        cout << (checkEuler() ? 1 : 0) << endl;    
    }
}