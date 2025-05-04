#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MOD 1000000007
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#pragma GCC optimize("Ofast")


inline int change(string &s, int &k)
{
    int res = 0;
    for(char &i : s) res = res * k + (i - '0');
    return res;
}

int main()
{
    BOOST;
    int t = 1, k;   cin >> t;
    string a, b;
    while(t--)
    {
        cin >> k >> a >> b;
        int res = change(a, k) + change(b, k);
        stack <int> st;
        while(res)
        {
            st.push(res % k);
            res /= k;
        }
        while(st.size())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
    return 0;
}
