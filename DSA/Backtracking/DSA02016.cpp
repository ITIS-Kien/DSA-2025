#include <bits/stdc++.h>
using namespace std;

int n, t, x[100], cot[100], cheo1[100], cheo2[100], cnt;
int a[100][100];

void nQueen(int i) {
    for (int j = 1; j <= n; j++)
    {
        if(!cot[j] && !cheo1[i - j + n] && !cheo2[i + j - 1]){
            cot[j] = 1;
            cheo1[i - j + n] = 1;
            cheo2[i + j - 1] = 1;
            x[i] = j;
            if(i == n) cnt++;
            else nQueen(i + 1);
            cot[j] = 0;
            cheo1[i - j + n] = 0;
            cheo2[i + j - 1] = 0;   
        }
    }
}
int main() {
    int t; cin >> t;
    while (t--)
    {
        cin >> n; cnt = 0;
        for (int i = 1; i <= n; i++)
        {   
            for (int j = 1; j <= n; j++)
            {
                a[i][j] = 1;
            }
        }
        nQueen(1);
        cout << cnt << "\n";
    }
}