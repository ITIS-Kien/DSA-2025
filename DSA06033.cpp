#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) { return a.first < b.first; }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vp.push_back({x, i});
        }
        sort(vp.begin(), vp.end(), cmp);
        int res = -1e9;
        int last = vp[0].second;
        for (int i = 1; i < n; i++)
        {
            if (vp[i].second - last > res)
            {
                res = vp[i].second - last;
            }
            last = min(last, vp[i].second);
        }
        cout << res << endl;
    }
}