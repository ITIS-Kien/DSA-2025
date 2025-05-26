t = int(input())
while t > 0:
    t -= 1
    s = input()
    n = len(s)
    dp = [[0] * n for _ in range(n)]
    max_len = 1  # Ít nhất một ký tự là palindrome

    # Chuỗi con độ dài 1 là palindrome
    for i in range(n):
        dp[i][i] = 1

    # Chuỗi con độ dài 2
    for i in range(n - 1):
        if s[i] == s[i + 1]:
            dp[i][i + 1] = 1
            max_len = 2

    # Các chuỗi con dài hơn
    for length in range(3, n + 1):  # length là độ dài chuỗi con
        for i in range(n - length + 1):
            j = i + length - 1
            if s[i] == s[j] and dp[i + 1][j - 1] == 1:
                dp[i][j] = 1
                max_len = length

    print(max_len)
