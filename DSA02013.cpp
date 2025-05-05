#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

int prime[505];
int n, p, s;

void sieve(){
    memset(prime, 0, sizeof(prime));
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= 500; ++i) {
        if (!prime[i]) {
            for (int j = i * i; j <= 500; j += i) {
                prime[j] = 1;
            }
        }
    }
}

void Try(int i, int sum, vector<int> &current, vector<vector<int>> &res, const vector<int> &primes) {
    if (sum > s || current.size() > n) return;
    if (sum == s) {
        if (current.size() == n) {
            res.push_back(current);
        }
        return;
    }
    for (int j = i; j < primes.size(); ++j) {
        int num = primes[j];
        if (sum + num > s) break;
        current.push_back(num);
        Try(j + 1, sum + num, current, res, primes);
        current.pop_back();
    }
}

int main(){
    fast;
    sieve();
    int t; cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        cin >> n >> p >> s;
        vector<int> primes;
        for (int i = p + 1; i <= s; ++i) {
            if (!prime[i]) primes.push_back(i);
        }
        vector<vector<int>> res;
        vector<int> current;
        Try(0, 0, current, res, primes);
        cout << res.size() << endl;
        for (auto &combination : res) {
            for (size_t i = 0; i < combination.size(); ++i) {
                cout << combination[i];
                if (i < combination.size() - 1) cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}