#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
// ITIS LA NHA

int bi[1005], a[1005], n, sum, cnt;
int check(){
    int tmp = 0;
    for (int i = 1; i <= n; i++)
    {
        if(bi[i]) tmp += a[i];
    }
    if(tmp == sum) return 1;
    return 0;
}
void Try(int u){
    for(int i = 0; i <= 1; i++){
        bi[u] = i;
        if(u == n){
            if(check()) {
                cnt++;
                for(int j = 1; j <= n; j++) 
                    if(bi[j]) cout << a[j] << " ";
                cout << endl;
            }
        }
        else Try(u + 1);
    }
}
int main()
{
    fast;
    cin >> n >> sum;
    for(int i = 1; i <= n; i++) cin >> a[i];
    Try(1);
    cout << cnt;
    return 0;
}