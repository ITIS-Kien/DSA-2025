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
vector <int> a(20);
void Try(int i, int s, int in[]){
    if(i == k) {
        int check = 1;
        for (int j = 0; j < k; j++) if(a[j] != in[j]) check = 0;
        if(check) cout << cnt << endl;
        else cnt++;
    }
    else {
        for (int j = s; j <= n - k + i + 1; j++)
        {
            a[i] = j;
            Try(i + 1, j + 1, in);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        int in[k]; cnt = 1;
        for (int &it : in) cin >> it;
        Try(0, 1, in);
    }
    
}
