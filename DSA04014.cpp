#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

inline ll Merge(ll *a, int l, int r, int mid){
    ll p1 = mid - l + 1, p2 = r - mid;
    ll L[p1], R[p2];
    for (int i = 0; i < p1; ++i) L[i] = a[l + i];
    for (int i = 0; i < p2; ++i) R[i] = a[i + mid + 1];
    ll res = 0, i = 0, j = 0, k = l;
    while (i < p1 and j < p2)
    {
        if(L[i] <= R[j]) a[k++] = L[i++];
        else {
            a[k++] = R[j++];
            res += p1 - i;
        }
    }
    while (i < p1) a[k++] = L[i++];
    while (j < p2) a[k++] = R[j++];
    return res;
}

inline ll calc(ll *a, int l, int r){
    ll res = 0;
    if(l < r){
        int mid = (l + r) >> 1;
        res += calc(a, l, mid);
        res += calc(a, mid + 1, r);
        res += Merge(a, l, r, mid);
    }
    return res;
}

int main(){
    BOOST;
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        ll a[n]; 
        for(ll &it : a) cin >> it;
        cout << calc(a, 0, n - 1) << endl;
    }
       
    
}