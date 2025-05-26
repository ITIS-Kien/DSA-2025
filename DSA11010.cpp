#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define nguyentukien_218 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'

struct node{
    int value;
    node *left, *right;
    node(int value){
        this->value = value;
        left = right = NULL;
    }
}; typedef node* tree;

void build(tree &root, int par, int val, char c){
    if(root == NULL) return;
    if(root->value == par){
        if(c == 'L') root->left = new node(val);
        else root->right = new node(val);
        return;
    }
    build(root->left, par, val, c);
    build(root->right, par, val, c);
}

int level[100005], MaxLevel;
void travelsal(tree root, int current){
    if(root == NULL) return;
    level[current]++;
    MaxLevel = max(MaxLevel, current);
    travelsal(root->left, current + 1);
    travelsal(root->right, current + 1);
}

int main(){
    nguyentukien_218
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        tree root = NULL;
        memset(level, 0, sizeof(level));
        MaxLevel = 0;
        for(int i = 0; i < n; i++){
            int par, val; char c;
            cin >> par >> val >> c;
            if(root == NULL) root = new node(par);
            build(root, par, val, c);
        }
        travelsal(root, 0);
        int ok = 1;
        for(int i = 0; i <= MaxLevel; i++){
            if(level[i] != (1 << i)){
                ok = false;
                break;
            }
        }
        cout << ok << endl;
    }
    cerr << "Time: " << TIME << endl;
}
