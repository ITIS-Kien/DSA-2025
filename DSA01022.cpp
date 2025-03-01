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
vector <bool> used(15);
void Try(int i, vector <int> in){
    if(i == n) {
        int check = 1;
        for(int j = 1; j <= n; j++) if (a[j] != in[j]) check = 0;
        if(check) cout << cnt << endl;
        else cnt++;
    }
    else {
        for (int j = 1; j <= n; j++)
        {
            if(!used[j]){
                a[i] = j;
                used[j] = true;
                Try(i + 1, in);
                used[j] = false;
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cnt = 1;
        cin >> n;
        vector <int> in(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> in[i];
        }
        Try(0, in);
    }
    
}
