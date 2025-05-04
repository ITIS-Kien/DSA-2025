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
        int n; cin >> n;
        int a[n]; 
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int s = 0, e = n - 1;
        for (int i = 0; i < n; i++)
        {
            if(i & 1) cout << a[s++] << " ";
            else cout << a[e--] << " ";
        }
        cout << endl;
    }
    
    
}
