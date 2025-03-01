#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA
bool cmp (pair <int, int> a, pair <int, int> b){
    return a.second < b.second;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector <pair <int, int>> a(n);
        for (int i = 0; i < n; i++) cin >> a[i].first;
        for (int i = 0; i < n; i++) cin >> a[i].second;
        sort(a.begin(), a.end(), cmp);
        int cnt = 1, end = a[0].second;
        for (int i = 1; i < n; i++){
            if(a[i].first >= end){
                cnt++;
                end = a[i].second;
            }
        }
        cout << cnt << endl;
    }
    
    
}
