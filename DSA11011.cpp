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
int level[100005];
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

bool travelsal(tree root){
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL) return true;
    if(root->left == NULL || root->right == NULL) return false;
    return travelsal(root->left) && travelsal(root->right);
}

int main(){
    nguyentukien_218
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        tree root = NULL;
        memset(level, 0, sizeof(level));
        for(int i = 0; i < n; i++){
            int par, val; char c;
            cin >> par >> val >> c;
            if(root == NULL) root = new node(par);
            build(root, par, val, c);
        }
        cout << travelsal(root) << endl;
    }
    cerr << "Time: " << TIME << endl;
}
