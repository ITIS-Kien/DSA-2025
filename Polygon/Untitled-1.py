def check(n, k, a):
    cnt = 0
    res = 0
    for i in range(n):
        if a[i] == 1:  # Ký tự 'B'
            if cnt == k:
                res += 1
            cnt = 0
        else:  # Ký tự 'A'
            cnt += 1
    if cnt == k:  # Kiểm tra chuỗi kết thúc bằng 'A'
        res += 1
    return res == 1

def generate(n, k):
    a = [0] * n  # Khởi tạo xâu toàn 'A' (0 đại diện cho 'A', 1 đại diện cho 'B')
    results = []

    while True:
        if check(n, k, a):  # Kiểm tra nếu xâu thỏa mãn điều kiện
            results.append("".join(['A' if x == 0 else 'B' for x in a]))
        
        # Sinh xâu nhị phân tiếp theo
        for i in range(n - 1, -1, -1):
            if a[i] == 0:
                a[i] = 1
                break
            else:
                a[i] = 0
        else:
            break  # Kết thúc khi đã duyệt hết tất cả các xâu

    return results

# Đọc dữ liệu đầu vào
n, k = map(int, input().split())

# Sinh các xâu thỏa mãn
results = generate(n, k)

# In kết quả
print(len(results))
for res in results:
    print(res)