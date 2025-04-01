def DFS(s, v, a, f):
    print(s, end=" ")
    f[s] = False  # Đánh dấu đỉnh s đã được thăm
    for it in sorted(a[s]):  # Đảm bảo duyệt theo thứ tự tăng dần
        if f[it]:
            DFS(it, v, a, f)

t = int(input().strip())  # Đọc số lượng test
while t > 0:
    v, e, s = map(int, input().strip().split())  # Đọc số đỉnh, số cạnh, đỉnh xuất phát
    f = [True] * (v + 1)
    a = [[] for _ in range(v + 1)]

    edges = list(map(int, input().strip().split()))  # Đọc toàn bộ danh sách cạnh
    for i in range(0, len(edges), 2):  # Duyệt từng cặp (x, y)
        x, y = edges[i], edges[i + 1]
        a[x].append(y)

    DFS(s, v, a, f)
    print("\n")
    t -= 1  # Giảm giá trị của t
