#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fixs(x, n) fixed << setprecision(n) << x
#define setf(x, n, c) setw(n) << setfill(c) << x
//ITIS LA NHA

struct Node
{
    char c;
    Node *left, *right;
};
typedef Node* Tree;

Tree createNode(char c){
    Tree p = new Node;
    p->c = c;
    p->left = p->right = NULL;
    return p;
}

void order(Tree a){
    if(a != NULL){
        order(a->left);
        cout << a->c;
        order(a->right);
    }
}
int main(){
    int t; cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        stack <Tree> st;
        for(char it : s){
            if(it == '+' || it == '-' || it == '*' || it == '/'){
                Tree p = createNode(it);
                p->right = st.top(); st.pop();
                p->left = st.top(); st.pop();
                st.push(p);
            }
            else st.push(createNode(it));
        }
        order(st.top());
        cout << endl;
    }
    
    
}
