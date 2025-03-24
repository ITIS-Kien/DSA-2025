# Định nghĩa lớp Node để biểu diễn một nút trong cây nhị phân
class Node:
    def __init__(self, data):
        self.data = data  # Giá trị của nút
        self.left = self.right = None  # Con trỏ tới nút con trái và phải, ban đầu là None

# Hàm xây dựng cây nhị phân từ danh sách inorder và preorder
def buildTree(inorder, preorder, inorder_start, inorder_end, preorder_index, inorder_map):
    # Nếu chỉ số bắt đầu lớn hơn chỉ số kết thúc, trả về None và chỉ số preorder hiện tại
    if inorder_start > inorder_end:
        return None, preorder_index

    # Lấy giá trị gốc từ danh sách preorder
    root_value = preorder[preorder_index]
    # Tạo một nút mới với giá trị gốc
    root = Node(root_value)
    # Tăng chỉ số preorder lên 1
    preorder_index += 1

    # Lấy chỉ số của giá trị gốc từ bản đồ inorder_map
    inorder_index = inorder_map[root_value]

    # Gọi đệ quy để xây dựng cây con trái
    root.left, preorder_index = buildTree(inorder, preorder, inorder_start, inorder_index - 1, preorder_index, inorder_map)
    # Gọi đệ quy để xây dựng cây con phải
    root.right, preorder_index = buildTree(inorder, preorder, inorder_index + 1, inorder_end, preorder_index, inorder_map)

    # Trả về nút gốc và chỉ số preorder hiện tại
    return root, preorder_index

# Hàm duyệt cây theo thứ tự hậu tự (post-order)
def postOrder(root):
    if root:
        postOrder(root.left)  # Duyệt cây con trái
        postOrder(root.right)  # Duyệt cây con phải
        print(root.data, end=" ")  # In giá trị của nút

# Đọc số lượng test case
t = int(input())
for _ in range(t):
    # Đọc số lượng phần tử của cây
    n = int(input())
    # Đọc danh sách inorder
    inorder = list(map(int, input().split()))
    # Đọc danh sách preorder
    preorder = list(map(int, input().split()))
    # Tạo bản đồ inorder_map để lưu chỉ số của các giá trị trong danh sách inorder
    inorder_map = {value: index for index, value in enumerate(inorder)}
    # Khởi tạo chỉ số preorder là 0
    preorder_index = 0
    # Gọi hàm buildTree để xây dựng cây
    root, _ = buildTree(inorder, preorder, 0, n - 1, preorder_index, inorder_map)
    # Gọi hàm postOrder để duyệt cây và in ra kết quả
    postOrder(root)
    print()  # In dòng mới sau mỗi test case

