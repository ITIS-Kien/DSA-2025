#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int a[20], sum, cnt = 0;
vector <int> v10, v5;
void Try5(int i, int s){
    if(i == 5){
        int tmp = 0;
        for (int it : v5) {
            tmp += a[v10[it]];
        }
        if(tmp == sum / 3) ++cnt;
    } else {
        for (int j = s; j < 10 - j + 5; ++j){
            v5.push_back(j);
            Try5(i + 1, j + 1);
            v5.pop_back();
        }
    }
}
void Try10(int i, int s){
    if(i == 10){
        int tmp = 0;
        for (int it : v10) {
            tmp += a[it];
        }
        if(tmp == sum / 3 * 2) Try5(0, 0);
    } else {
        for (int j = s; j < 15 - j + 10; ++j){
            v10.push_back(j);
            Try10(i + 1, j + 1);
            v10.pop_back();
        }
    }
}
int main(){
    fast;
    for (int i = 0; i < 15; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    Try10(0, 0);
    cout << cnt;
}