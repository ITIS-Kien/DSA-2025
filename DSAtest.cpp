#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"
const int mod = 1e9 + 7;

int check = 0;
void Try(int i, int n)
{
    if (i == 1 && check == 1)
    {
        cout << i << " ";
    }
    else
    {
        if (i == n)
            check = 1;
        if (check == 0)
            Try(i + 1, n);
        else
            Try(i - 1, n);
        cout << i << " ";
    }
}
int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        check = 0;
        int n;
        cin >> n;
        if(n == 1) cout << 1 << endl;
        else Try(1, n);
        cout << endl;
    }
}