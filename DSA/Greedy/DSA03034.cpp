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
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        int a[n1], b[n2], c[n3];
        for (int &it : a) cin >> it;
        for (int &it : b) cin >> it;
        for (int &it : c) cin >> it;
        int i = 0, j = 0, k = 0, f = 1;
        while (i < n1 && j < n2 && k < n3){
            if(a[i] == b[j] && a[i] == c[k]){
                cout << a[i] << " ";
                i++, j++; k++;
                f = 0;
            }
            else if(a[i] > b[j]) j++;
            else if(a[i] > c[k]) k++;
            else i++;
        }
        if(f) cout << "NO";
        cout << endl;
    }
        
    
}
