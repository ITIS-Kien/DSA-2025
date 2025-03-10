#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        set <int> s;
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            s.insert(x);
        }
        if(s.size() < 2) cout << -1 << endl;
        else{
            auto it = s.begin();
            cout << *it << " ";
            it++;
            cout << *it << endl;
            
        }
    }
    
    
}
