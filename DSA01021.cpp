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
        int n, k, cnt = 0; cin >> n >> k;
        vector <int> org, tmp;
        for (int i = 0; i < k; i++)
        {
            int x; cin >> x;
            org.push_back(x);
            tmp.push_back(x);
        }
        int i = k - 1;
        while (i >= 0 && tmp[i] == n - k + i + 1) i--;
        if(i >= 0) {
            tmp[i++]++;
            for (int j = i; j < k; j++) tmp[j] = tmp[j - 1] + 1;
            for (int i = 0; i < k; i++)
            {
                if(!binary_search(org.begin(), org.end(), tmp[i])) cnt++;
            }
            cout << cnt << endl;
        }
        else cout << k << endl;
    }
    
    
}
