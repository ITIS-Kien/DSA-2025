#include <bits/stdc++.h>
using namespace std;

int n, a[100][100], used[100], X[100], sum = 0, cmin = 1e9, ans = 1e9;
void visit(int i){
    for (int j = 1; j <= n; j++)
    {
        if(!used[j]){
            used[j] = 1;
            X[i] = j;
            sum += a[X[i-1]][j];
            if(i == n){
                ans = min(ans, sum + a[X[i]][1]);
            }
            else if(sum + cmin * (n - i + 1) < ans){
                visit(i+1);
            }
            used[j] = 0;
            sum -= a[X[i-1]][j];
        }
    }
    
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if(i != j) cmin = min(cmin, a[i][j]);
        }
    }
    used[1] = 1;
    X[1] = 1;
    visit(2);
    cout << ans;
}
