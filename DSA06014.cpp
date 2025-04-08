#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA
vector <int> prime, f(1000005, 1);
void snt(){
    f[0] = f[1] = 0;
    for (int i = 2; i <= 1000; ++i){
        if(f[i]){
            prime.push_back(i);
            for (int j = i * i; j <= 1000000; j += i)
                f[j] = 0;
        }
    }
}
int main(){
    int t, n, nf; cin >> t;
    snt();
    while (t--)
    {
        cin >> n; nf = 1;
        for (int i = 0; i < prime.size() && prime[i] <= n; ++i){
            if(f[n - prime[i]]){
                cout << prime[i] << " " << n - prime[i] << endl;
                nf = 0;
                break;
            }
        }
        if(nf) cout << -1 << endl;
    }
        
    
}
