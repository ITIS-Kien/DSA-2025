#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

int n, preorder[1001], cur;
map <int, int> inorder;

struct Node{
    int value;
    Node *left, *right;
    Node(int value){
        this->value = value;
        this->left = this->right = NULL;
    }
};

Node* build(int l, int r){
    if(l > r) return NULL;
    Node* root = new Node(preorder[cur]);
    int idx = inorder[preorder[cur++]];
    root->left = build(l, idx - 1);
    root->right = build(idx + 1, r);
    return root;
}

void postorder(Node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->value << " ";
}
int main(){
    BOOST;
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        cur = 0;
        inorder.clear();
        for (int i = 0; i < n; ++i)
        {
            int x; cin >> x;
            inorder[x] = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> preorder[i];
        }
        Node* root = build(0, n - 1);
        postorder(root);
        cout << endl;

    }
    
    
}