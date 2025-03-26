#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

bool check(char c)
{
    return (c == 'A' or c == 'E');
}

bool ok(string s)
{
    for(int i = 0; i < s.size(); ++i)
    {
        if(check(s[i]))
        {
            if(i == 0 or i == s.size() - 1) continue;
            if(!check(s[i - 1]) and !check(s[i + 1])) return 0;
        }
    }
    return 1;
}
int main(){
    string s = "ABC";
    char c; cin >> c;
    for (int i = 'D'; i <= c; i++) s += (char)i;
    do if(ok(s)) cout << s << endl;
    while (next_permutation(s.begin(), s.end()));
}
