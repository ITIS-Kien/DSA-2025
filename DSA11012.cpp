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

bool travelsal(tree root1, tree root2){
    if(root1 == NULL && root2 == NULL) return true;
    if(root1 == NULL || root2 == NULL) return false;
    if(root1->value != root2->value) return false;
    return travelsal(root1->left, root2->left) && travelsal(root1->right, root2->right);
}

int main(){
    nguyentukien_218
    int t; cin >> t;
    while(t--){
        tree root1 = NULL, root2 = NULL;
        int n1; cin >> n1;
        memset(level, 0, sizeof(level));
        for(int i = 0; i < n1; i++){
            int par, val; char c;
            cin >> par >> val >> c;
            if(root1     == NULL) root1 = new node(par);
            build(root1, par, val, c);
        }
        int n2; cin >> n2;
        for(int i = 0; i < n2; i++){
            int par, val; char c;
            cin >> par >> val >> c;
            if(root2 == NULL) root2 = new node(par);
            build(root2, par, val, c);
        }
        cout << travelsal(root1, root2) << endl;
    }
    cerr << "Time: " << TIME << endl;
}
