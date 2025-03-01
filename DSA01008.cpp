#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int n, k; 
vector <int> a(20);
void Try(int i){
    if(i == n + 1) {
        int cnt = 0;
        for(int j = 1; j <= n; j++) cnt += a[j];
        if(cnt == k) {
            for(int j = 1; j <= n; j++) cout << a[j];
            cout << "\n";
        }
    }
    else {
        for (int j = 0; j <= 1; j++)
        {
            a[i] = j;
            Try(i + 1);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1);
    }
    
}
