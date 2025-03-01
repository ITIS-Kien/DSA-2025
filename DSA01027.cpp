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
vector <bool> used(15);
void Try(int i, int in[]){
    if(i == n) {
        for(int j = 0; j < n; j++) cout << in[a[j]] << " ";
        cout << endl;
    }
    else {
        for (int j = 0; j < n; j++)
        {
            if(!used[j]){
                a[i] = j;
                used[j] = true;
                Try(i + 1, in);
                used[j] = false;
            }
        }
    }
}
int main(){
    int t; t = 1;
    while(t--){
        cin >> n;
        int in[n];
        for (int &it : in) cin >> it;
        sort(in, in + n);
        Try(0, in);
    }
    
}
