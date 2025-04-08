#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
// #pragma GCC optimize("Ofast")

struct node{
    int val;
    node *l, *r;
    node(int v){
        val = v;
        l = r = NULL;
    }
}; 
typedef node* tree;
tree build(int n, int *inOrder, int *levelOrder, int s, int e){
    if(n > 0){
        tree root = new node(levelOrder[0]);
        int idx = -1;
        unordered_map<int, int> m;
        for (int i = s; i <= e; ++i){
            if(inOrder[i] == levelOrder[0]){
                idx = i;
                break;
            }
            ++m[inOrder[i]];
        }
        int L[m.size()], R[e - s - m.size()], l, r;
        l = r = 0;
        for (int i = 1; i < n; ++i){
            if(m[levelOrder[i]])
                L[l++] = levelOrder[i];
            else
                R[r++] = levelOrder[i];
        }
        root->l = build(idx - s, inOrder, L, s, idx - 1);
        root->r = build(e - idx, inOrder, R, idx + 1, e);
        return root;
    }
    return NULL;
}
void postOrder(tree root){
    if(root->l != NULL) postOrder(root->l);
    if(root->r != NULL) postOrder(root->r);
    cout << root->val << ' ';
}
int main(){
    fast;
    int t = 1;  cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int inOrder[n], levelOrder[n];
        for (int i = 0; i < n; ++i) cin >> inOrder[i];
        for (int i = 0; i < n; ++i) cin >> levelOrder[i];
        tree root = build(n, inOrder, levelOrder, 0, n - 1);
        postOrder(root);
        cout << endl;
    }
    
}
