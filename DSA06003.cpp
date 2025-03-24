#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int main()
{
    int t, n, idx;
    cin >> t;
    while(t--)
    {
        int cnt = 0; cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        for(int i = 0; i < n; ++i)
        {
            idx = i;
            for(int j = i + 1; j < n; ++j) if(a[idx] > a[j]) idx = j;
            cnt += idx != i;
            swap(a[i], a[idx]);
        }
        cout << cnt << endl;
    }
    return 0;
}
