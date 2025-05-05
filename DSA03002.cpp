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
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] == '6') a[i] = '5';
    }
    for (int i = 0; i < b.size(); i++)
    {
        if(b[i] == '6') b[i] = '5';
    }
    cout << stoi(a) + stoi(b) << " ";
    for (int i = 0; i < n; i++)
    {
        if(a[i] == '5') a[i] = '6';
    }
    for (int i = 0; i < m; i++)
    {
        if(b[i] == '5') b[i] = '6';
    }
    cout << stoi(a) + stoi(b);
}
