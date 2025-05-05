#include <bits/stdc++.h>
using namespace std;

int n, x[100], cot[100], cheo1[100], cheo2[100], sum;
int a[100][100];
int check(){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[x[i]][i];
    }
    return sum;
}
void nQueen(int i) {
    for (int j = 1; j <= n; j++)
    {
        if(!cot[j] && !cheo1[i - j + n] && !cheo2[i + j - 1]){
            cot[j] = 1;
            cheo1[i - j + n] = 1;
            cheo2[i + j - 1] = 1;
            x[i] = j;
            if(i == n){
                if(check() > sum) sum = check();
            } else nQueen(i + 1);
            cot[j] = 0;
            cheo1[i - j + n] = 0;
            cheo2[i + j - 1] = 0;   
        }
    }
}
int main() {
    n = 8;
    int t; cin >> t;
    while (t--)
    {
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        nQueen(1);
        cout << sum << "\n";
    }
}