#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

struct tmp{
    int val, row, col;
};
bool cmp(tmp a, tmp b){
    return a.val > b.val;
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int col[n], row[n];
        vector <tmp> a;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                tmp x; cin >> x.val;
                x.row = i;
                x.col = j;
                a.push_back(x);
            }
        }
        int sum = 0;
        sort(a.begin(), a.end(), cmp);
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        for (int i = 0; i < n * n; i++){
            int x = a[i].val;
            int r = a[i].row, c = a[i].col;
            if(!row[r] && !col[c]){
                sum += x;
                row[r] = 1;
                col[c] = 1;
            }
        }
        cout << sum << endl;
    }
}
