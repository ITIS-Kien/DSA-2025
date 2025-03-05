#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

struct point{
    int value, row, col;
};
bool cmp (point x, point y){
    return x.value > y.value;
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector <vector <point>> a(n, vector <point> (n));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j].value;
                a[i][j].row = i;
                a[i][j].col = j;
            }
            sort(a[i].begin(), a[i].end(), cmp);
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
        }
        
                
    }
        
        
    
    
}
