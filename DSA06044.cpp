#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> odd, even;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            even.push_back(x);
        } else {
            odd.push_back(x);
        }
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end(), greater<int>());

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            cout << even[i / 2 - 1] << " ";
        } else {
            cout << odd[i / 2] << " ";
        }
    }

    return 0;
}