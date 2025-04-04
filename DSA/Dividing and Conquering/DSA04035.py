def power(a, b, mod=1000000007):
    res = 1
    while b > 0:
        if b % 2 == 1:
            res = (res * a) % mod
        a = (a * a) % mod
        b //= 2
    return res

import sys

# Đọc đầu vào nhanh và xử lý từng dòng
input = sys.stdin.read
data = input().splitlines()

for line in data:
    if line.strip():  # Kiểm tra dòng không rỗng
        a, b = map(int, line.split())
        if a == 0 and b == 0:
            break
        print(power(a, b))
