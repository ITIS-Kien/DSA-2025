#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA
int n; string s = "H";
void Try(int u){
    if(u == n) {
        if(s.back() == 'A') cout << s << endl;
    }  
    else{
        if(s.back() == 'H'){
            s.push_back('A');
            Try(u + 1);
            s.pop_back();
        }
        else{
            s.push_back('A');
            Try(u + 1);
            s.pop_back();
            s.push_back('H');
            Try(u + 1);
            s.pop_back();
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        Try(1);
    }
    
    
}
