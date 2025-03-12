#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll cnt = 0;
    for (int i = 0; i < n - 2; ++i)
    {
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            ll m = a[i] + a[l] + a[r];
            if (m < x) l++;
            else if(m > x) r--;
            else return 1;
        }
    }
    return 0;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        if(solve()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}