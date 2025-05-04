#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string calc(string &s)
{
    stack<char> st;
    bool check;
    char cur;
    for(char &i : s)
    {
        if(i == ')')
        {
            check = 0;
            cur = st.top();
            st.pop();
            while(cur != '(')
            {
                if(cur == '+' or cur == '-' or  cur == '*' or cur == '/') check = 1;
                cur = st.top();
                st.pop();
            }
            if(!check) return "Yes";
        }
        else st.push(i);
    }
    return "No";
}

int main()
{
    int t = 1;
    cin >> t;
    string s;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);
        cout << calc(s) << endl;
    }
    return 0;
}