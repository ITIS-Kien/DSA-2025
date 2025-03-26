#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA
vector <int> a, tmp;
int n, k, cnt = 0;
void Try(int s){
    if(tmp.size() == k) cnt++;
    else {
        for(int i = s; i < n; i++){
            if(tmp.empty() || a[i] > tmp.back()){
                tmp.push_back(a[i]);
                Try(i + 1);
                tmp.pop_back();
            }
        }
    }
}
int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    Try(0);
    cout << cnt;
}
