t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    total = sum(a)
    
    if total % 2 == 1:
        print("NO")
        continue
    
    target = total // 2
    dp = [False] * (target + 1)
    dp[0] = True
    
    for it in a:
        for i in range(target, it - 1, -1):
            if dp[i - it]:
                dp[i] = True
    
    if dp[target]:
        print("YES")
    else:
        print("NO")