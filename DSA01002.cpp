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
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        int a[n + 5];
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        int i = k;
        while (a[i] == n - k + i && i) i--;
        if(!i) {
            for (int i = 0; i < k; i++)
            {
                cout << i + 1 << " ";
            }
        }
        else {
            a[i]++;
            for (int j = 1; j <= k; j++)
            {
                if(j <= i) cout << a[j] << " ";
                else {
                    a[j] = a[j - 1] + 1;
                    cout << a[j] << " ";
                }
            }
        }    
        cout << "\n";    
    }
    
    
}
