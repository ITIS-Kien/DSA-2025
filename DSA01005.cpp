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
vector <bool> used(15);
void Try(int i){
    if(i == n + 1) {
        for(int j = 1; j <= n; j++) cout << a[j];
        cout << " ";
    }
    else {
        for (int j = 1; j <= n; j++)
        {
            if(!used[j]){
                a[i] = j;
                used[j] = true;
                Try(i + 1);
                used[j] = false;
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << endl;
    }
    
}
