#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MOD 1000000007
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#pragma GCC optimize("Ofast")

struct Matrix{
	ll mt[11][11]; int sz;
	Matrix(int n){
		this->sz = n;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				this->mt[i][j] = 0;
			}
		}
	}
	Matrix operator * (Matrix &A){
		Matrix res(this->sz);
		for (int i = 0; i < this->sz; ++i){
			for (int j = 0; j < this->sz; ++j){
				res.mt[i][j] = 0;
				for (int k = 0; k < this->sz; ++k){
					res.mt[i][j] += ((this->mt[i][k] % MOD) * (A.mt[k][j] % MOD)) % MOD;
					res.mt[i][j] %= MOD;
				}
			}
		}
		return res;
	}
};

Matrix binPow(Matrix A, ll n){
	if(n == 1) return A;
	Matrix tmp = binPow(A, n >> 1);
	tmp = tmp * tmp;
	if(n & 1) tmp = tmp * A;
	return tmp;
}

int main(){
	BOOST;
	int t, n; cin >> t;
	while(t--){
		ll k; cin >> n >> k;
		Matrix A(n);
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				cin >> A.mt[i][j];
			}
		}
		Matrix ans = binPow(A, k);
		for (int i = 0; i < ans.sz; ++i){
			for (int j = 0; j < ans.sz; ++j){
				cout << ans.mt[i][j] << " ";
			}
			cout << endl;
		}
	}
}