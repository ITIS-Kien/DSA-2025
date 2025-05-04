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
int par, chi;
char c;
void build(node* root){
    if(root == NULL) return;
    if(root->value == par){
        if(c == 'L') root->left = new node(chi);
        else root->right = new node(chi);
    } else {
        build(root->left);
        build(root->right);
    }
}

void spiral_order(node* root) {
    if (root == NULL) return;
    stack<node*> st1, st2;
    st1.push(root);
    while (!st1.empty() || !st2.empty()) {
        while (!st1.empty()) {
            node* tmp = st1.top();
            st1.pop();
            cout << tmp->value << " ";
            if (tmp->right) st2.push(tmp->right);
            if (tmp->left) st2.push(tmp->left);
        }
        while (!st2.empty()) {
            node* tmp = st2.top();
            st2.pop();
            cout << tmp->value << " ";
            if (tmp->left) st1.push(tmp->left);
            if (tmp->right) st1.push(tmp->right);
        }
    }
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
        spiral_order(root);
        cout << endl;
    }
    
    
}