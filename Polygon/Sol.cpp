// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

// Các macro để tiện sử dụng
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

// Cấu trúc dữ liệu cho một nút trong cây nhị phân
struct Node
{
    int val; // Giá trị của nút
    Node *left, *right; // Con trỏ đến con trái và con phải
};

// Định nghĩa kiểu dữ liệu cho con trỏ nút cây nhị phân
typedef Node* binTree;

// Hàm tạo một nút mới với giá trị cho trước
binTree createNode(int x)
{
    binTree res = new Node;
    res -> val = x; // Gán giá trị cho nút
    res -> left = res -> right = NULL; // Khởi tạo con trái và con phải là NULL
    return res;
}

// Hàm xây dựng cây nhị phân từ duyệt trung thứ tự (inorder) và duyệt theo mức (level order)
binTree buildTree(int n, int *inorder, int *levelOrder, int st, int e)
{
    if(n > 0) // Trường hợp cơ sở: nếu còn nút để xử lý
    {
        // Tạo nút gốc từ phần tử đầu tiên của duyệt theo mức
        binTree root = createNode(levelOrder[0]);
        int idx = -1; // Vị trí của nút gốc trong duyệt trung thứ tự
        unordered_map<int, int> m; // Bản đồ để lưu các phần tử của duyệt trung thứ tự

        // Tìm vị trí của nút gốc trong duyệt trung thứ tự
        for(int i = st; i <= e; ++i)
        {
            if(inorder[i] == levelOrder[0])
            {
                idx = i;
                break;
            }
            ++m[inorder[i]]; // Thêm phần tử vào bản đồ
        }

        // Mảng để lưu các phần tử của cây con trái và cây con phải
        int L[m.sz], R[e - st - m.sz], l, r;
        l = r = 0;

        // Chia duyệt theo mức thành cây con trái và cây con phải
        for(int i = 1; i < n; ++i)
        {
            if(m[levelOrder[i]])
                L[l++] = levelOrder[i]; // Thêm vào cây con trái
            else
                R[r++] = levelOrder[i]; // Thêm vào cây con phải
        }

        // Đệ quy xây dựng cây con trái và cây con phải
        root -> left = buildTree(idx - st, inorder, L, st, idx - 1);
        root -> right = buildTree(e - idx, inorder, R, idx + 1, e);

        return root; // Trả về nút gốc của cây
    }
    return NULL; // Trả về NULL nếu không còn nút để xử lý
}

// Hàm duyệt hậu thứ tự (postorder) của cây nhị phân
void postOrder(binTree root)
{
    if(root -> left != NULL) // Duyệt cây con trái
        postOrder(root -> left);
    if(root -> right != NULL) // Duyệt cây con phải
        postOrder(root -> right);
    cout << root -> val << ' '; // In giá trị của nút hiện tại
}

int main()
{
    faster(); // Tối ưu hóa nhập/xuất
    int t = 1, n;
    cin >> t; // Đọc số lượng bộ test
    while(t--) // Xử lý từng bộ test
    {
        cin >> n; // Đọc số lượng nút
        int inorder[n], levelOrder[n];

        // Đọc duyệt trung thứ tự
        for(int &i : inorder)
            cin >> i;

        // Đọc duyệt theo mức
        for(int &i : levelOrder)
            cin >> i;

        // Xây dựng cây nhị phân
        binTree root = buildTree(n, inorder, levelOrder, 0, n - 1);

        // Duyệt hậu thứ tự và in kết quả
        postOrder(root);
        cout << endl;
    }
    return 0; // Thoát chương trình
}