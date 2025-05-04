#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
// ITIS LA NHA

int a[1005], n;
int check(){
    for (int i = 1; i <= n / 2; i++)
    {
        if (a[i] != a[n - i + 1])
            return 0;
    }
    return 1;
}
void Try(int u){
    for(int i = 0; i <= 1; i++){
        a[u] = i;
        if(u == n){
            if(check()) {
                for(int j = 1; j <= n; j++) cout << a[j] << " ";
                cout << endl;
            }
        }
        else Try(u + 1);
    }
}
int main()
{
    fast;
    cin >> n;
    Try(1);
    return 0;
}