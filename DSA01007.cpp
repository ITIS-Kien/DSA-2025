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
vector <char> a(20);
void Try(int i){
    if(i == n + 1) {
        for(int j = 1; j <= n; j++) cout << a[j];
        cout << " ";
    }
    else {
        for (int j = 'A'; j <= 'B'; j++)
        {
            a[i] = j;
            Try(i + 1);
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
