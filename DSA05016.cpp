#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

vector <int> f(1000007, 0), s;
void Sang(){
    f[1] = 1;
    for (int i = 2; i <= 1000; i++)
    {
        if(!f[i]){
            if(i == 2 || i == 3 || i == 5){
                f[i] = 1;
                for (int j = i * i; j <= 1000000; j += i) f[j] = 1;
            }
            else {
                f[i] = -1;
                for (int j = i * i; j <= 1000000; j += i) f[j] = -1;
            }
        }
    }
    for (int i = 1; i <= 1000000; i++)
    {
        if(f[i] > 0) s.push_back(i);
    }
}
int main(){
    int t; cin >> t;
    Sang();
    // cout << s.size() << endl;
    while (t--)
    {
        int n; cin >> n;
        cout << s[n - 1] << endl;
    }
    
    
}
