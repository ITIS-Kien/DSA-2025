#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA
int cnt[10000007];
int main(){
    int t; cin >> t;
    while(t--){
        memset(cnt, 0, sizeof(cnt));
        int n; cin >> n;
        int a[n];
        for (int &it : a) cin >> it;
        long long sum1 = 0, sum2 = LONG_LONG_MIN;
        for (int i = 0; i < n; i++){
            sum1 += a[i];
            sum2 = max(sum2, sum1);
            if(sum1 < 0) sum1 = 0;
        }
        printf("%lld\n", sum2);
    }    
}
