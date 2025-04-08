from collections import deque

def BFS(s, v, a, f):
    q = deque()
    q.append(s)
    f[s] = False
    while len(q) > 0 :
        u = q.popleft()
        print(u, end=" ")
        for it in a[u] : 
            if f[it] : 
                q.append(it)
                f[it] = False




t = int(input().strip())  # Đọc số lượng test
while t > 0:
    v, e, s = map(int, input().strip().split())  # Đọc số đỉnh, số cạnh, đỉnh xuất phát
    f = [True] * (v + 1)
    a = [[] for _ in range(v + 1)]

    edges = list(map(int, input().strip().split()))  # Đọc toàn bộ danh sách cạnh
    for i in range(0, len(edges), 2):  # Duyệt từng cặp (x, y)
        x, y = edges[i], edges[i + 1]
        a[x].append(y)

    BFS(s, v, a, f)
    print("\n")
    t -= 1  # Giảm giá trị của t
