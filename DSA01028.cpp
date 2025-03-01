#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int n, k; 
vector <int> a(20);
void Try(int i, int s, vector <int> in){
    if(i == k) {
        for(int j = 0; j < k; j++) cout << in[a[j]] << " ";
        cout << endl;
    }
    else {
        for (int j = s; j <= n - k + i; j++)
        {
            a[i] = j;
            Try(i + 1, j + 1, in);
        }
    }
}
int main(){
    int t; t = 1;
    while(t--){
        int l; cin >> l >> k;
        set <int> s;
        for (int i = 0; i < l; i++)
        {
            int x; cin >> x;
            s.insert(x);
        }
        vector <int> in(s.begin(), s.end());
        n = in.size();
        Try(0, 0, in);
    }
    
}
