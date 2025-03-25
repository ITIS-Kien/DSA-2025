#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA
vector <int> res;
void solve(int sum, int a[], int n, int k){
    if(sum == k) {
        cout << "[";
        for (int i = 0; i < res.size(); ++i) {
            cout << res[i];
            if(i != res.size() - 1) cout << " ";
        }
    }
    else {
        for (int i = 0; i < n; i++){
            if(sum + a[i] <= k){
                solve(sum + a[i], a, n, k, );
            } 
        }
    }
    
}
int main(){
    fast;
    int t, n, k; cin >> k;
    while (t--)
    {
        int a[n];
        for (int &it : a) cin >> it;

    }
    
}
