class Node:
    def __init__(self, s):
        self.s = s
        self.left = None
        self.right = None

def createNode(s):
    return Node(s)

def buildTree(data, i, n):
    if i < n:
        root = createNode(data[i])
        root.left = buildTree(data, 2 * i + 1, n)
        root.right = buildTree(data, 2 * i + 2, n)
        return root
    return None

def calc(root):
    if root.s not in {"+", "-", "*", "/"}:
        return int(root.s)
    if root.s == "+":
        return calc(root.left) + calc(root.right)
    elif root.s == "-":
        return calc(root.left) - calc(root.right)
    elif root.s == "*":
        return calc(root.left) * calc(root.right)
    elif root.s == "/":
        return calc(root.left) // calc(root.right)  # Sử dụng // để lấy phần nguyên

t = int(input())
for _ in range(t):
    n = int(input())
    data = input().split()
    root = buildTree(data, 0, n)
    print(calc(root))
