#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

vector <string> vs;
vector <string> res;
int n, k;
void Comp(int p){
    if(res.size() == k){
        for (string it : res) cout << it << " ";
        cout << endl;
    }
    for (int i = p; i < vs.size(); i++)
    {
        res.push_back(vs[i]);
        Comp(i + 1);
        res.pop_back();
    }
    
}
int main(){
    cin >> n >> k;
    set <string> ss;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        ss.insert(s);
    }
    vs.insert(vs.end(), ss.begin(), ss.end());
    // for(string it : vs) cout << it << " "; 
    Comp(0);
    
}
