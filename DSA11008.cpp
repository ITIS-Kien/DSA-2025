#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

struct node{
    int value;
    node *left, *right;
    node(int value){
        this->value = value;
        this->left = this->right = NULL;
    }
};
int par, chi, first;
char c;

void build(node* root){
    if(root == NULL) return;
    if(root->value == par){
        if(c == 'L') root->left = new node(chi);
        else root->right = new node(chi);
    }
    else {
        build(root->left);
        build(root->right);
    }
}

int traversal(node* root, int lev){
    if(root == NULL) return -1;
    if(root->left == NULL and root->right == NULL){
        if(first == -1) first = lev;
        else return first == lev;
    }
    int left = traversal(root->left, lev + 1);
    int right = traversal(root->right, lev + 1);
    return left and right;
}
int main(){
    BOOST;
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        node* root = NULL;
        for (int i = 0; i < n; ++i)
        {
            cin >> par >> chi >> c;
            if(root == NULL) root = new node(par);
            build(root);
        }
        first = -1;
        cout << traversal(root, 0) << endl;

    }
    
    
}