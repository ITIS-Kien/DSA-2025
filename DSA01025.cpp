#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int n, k, cnt; 
vector <char> a(20);
void Try(int i, int s){
    if(i == k) {
        for(int i = 0; i < k; i++) cout << a[i];
        cout << endl;
    }
    else {
        for (int j = s; j <= n - k + i; j++)
        {
            a[i] = 'A' + j;
            Try(i + 1, j + 1);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        Try(0, 0);
    }
    
}
