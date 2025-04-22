#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#pragma GCC optimize("Ofast")

int f[505];
int n, p, s, a[11];
vector<int> ans;
vector<int> prime;
void filter(){
    f[0] = f[1] = 1;
    for (int i = 2; i <= sqrt(500); ++i) {
        if (!f[i]) {
            prime.push_back(i);
            for (int j = i * i; j <= 500; j += i) {
                f[j] = 1;
            }
        }
    }
}
void Try(int i, int sum) {
    if(sum > s) return;
    if(sum == s) {
        if(ans.size() == n) {
            for (int it : ans) cout << it << " ";
            cout << endl;
        }
    } else {
        for (int j = i; j < prime.size(); ++j) {
            ans.push_back(prime[j]);
            Try(j + 1, sum + prime[j]);
            ans.pop_back();
        }
    }
}
int main(){
    fast;
    int t = 0, T; cin >> T;
    filter();
    while (++t <= T)
    {
        cin >> n >> p >> s;
        int i = upper_bound(prime.begin(), prime.end(), p) - prime.begin();
        ans.clear();
        cout << "Test " << t << ": " << endl;
        Try(i, 0);
        ans.clear();
        
    }
    
}