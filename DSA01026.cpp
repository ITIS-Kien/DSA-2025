#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int n; string s = "8";
void Try(int u, int cnt){
    if(u == n){
        if(s.back() == '6') cout << s << endl;
    }
        
    else{
        if(s.back() == '8'){
            s.push_back('6');
            Try(u + 1, cnt + 1);
            s.pop_back();
        }
        else {
            if(cnt < 3){
                s.push_back('6');
                Try(u + 1, cnt + 1);
                s.pop_back();
            }
            s.push_back('8');
            Try(u + 1, 0);
            s.pop_back();
        }
    }
}
int main(){
    cin >> n;
    Try(1, 0);
    
}
