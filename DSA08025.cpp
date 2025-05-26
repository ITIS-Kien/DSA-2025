#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int t = 1;

int X[] = {2, 2, 1, 1, -1, -1, -2, -2};
int Y[] = {1, -1, 2, -2, 2, -2, 1, -1};


int main(){
    BOOST;
    cin >> t;
    while (t--)
    {
        queue <string> q;
        map <string, int> level;
        string st, en;
        cin >> st >> en;
        if(st == en) {
            cout << 0 << endl;
            continue;
        }
        q.push(st);
        level[st] = 1;
        while (q.front() != en){
            string tmp = q.front();q.pop();
            char x = tmp[0], y = tmp[1];
            for (int i = 0; i < 8; ++i){
                if(x + X[i] <= 'h' and x + X[i] >= 'a' and y + Y[i] <= '8' and y + Y[i] >= '1'){
                    string top = string(1, x + X[i]) + string(1, y + Y[i]);

                    if(!level[top]) {
                        q.push(top);
                        level[top] = level[tmp] + 1;
                    }
                }
            }   
        }
        cout << level[en] - 1 << endl;
    
    }
}