#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

struct node{
    int data;
    node *left, *right;
    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
void makeNode(node *root, int y, int x, char c){
    if (c == 'L') root->left = new node(x);
    else root->right = new node(x);    
}
void insertNode(node *root, int y, int x, char c){
    if (root == NULL) return;
    if (root->data == y) makeNode(root, y, x, c);
    else{
        insertNode(root->left, y, x, c);
        insertNode(root->right, y, x, c);
    }
}
void leverorder(node *root){
    if(root == NULL) return;
    queue<node*> q;
    q.push(root);
    while (q.size())
    {
        node *tmp = q.front(); q.pop();
        cout << tmp->data << " ";
        if(tmp->left) q.push(tmp->left);
        if(tmp->right) q.push(tmp->right);
    }
    
}
int main(){
    fast;
    int t = 1; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        node *root = NULL;
        while (n--)
        {
            int y, x; char c;
            cin >> y >> x >> c;
            if(root == NULL) {
                root = new node(y);
                makeNode(root, y, x, c);
            }
            else insertNode(root, y, x, c);
        }
        leverorder(root);
        cout << endl;
    }
    
}