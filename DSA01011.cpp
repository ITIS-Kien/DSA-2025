#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#pragma GCC optimize("Ofast")

int main(){
    fast;
    int t = 1; cin >> t;
    while (t--)
    {
        int n, check = 1; cin >> n;
        string s; cin >> s;
        if(next_permutation(s.begin(), s.end())) cout << n << " " << s << endl;
        else cout << n << " " << "BIGGEST" << endl;
        
    }
    
}
