#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main()
{
    fast;
    int t = 1;
    cin >> t;
    int n, a[100005], k;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n);
        ll cnt = 0;
        for(int i = 0; i < n; ++i) cnt += lower_bound(a + i + 1, a + n, k + a[i]) - a - i - 1;
        cout << cnt << endl;
    }
    return 0;
}