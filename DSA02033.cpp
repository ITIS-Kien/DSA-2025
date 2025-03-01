#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

void check (string s){
    for (int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i + 1] - 1 || s[i] == s[i + 1] + 1) return;
    }
    cout << s << endl;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; 
        for (int i = 1; i <= n; i++) s += (char)(i + '0');
        do check(s);
        while (next_permutation(s.begin(), s.end()));
         
    }
    
    
}
