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
    fast;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &it : a) cin >> it;
        int ans = INT_MAX;
        for(int i = 0; i < n; i++) 
            for (int j = i + 1; j < n; j++) 
                if(abs(ans) > abs(a[i] + a[j])) 
                    ans = a[i] + a[j];
        cout << ans << endl;
    }
    return 0;
}
