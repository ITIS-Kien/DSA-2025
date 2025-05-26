t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    a = list(map(int, input().split()))
    dp1 = [0] * n
    dp2 = [0] * n
    
    # Compute dp1: maximum sum increasing subsequence ending at i
    for i in range(n):
        dp1[i] = a[i]
        for j in range(i):
            if a[j] < a[i]:
                if dp1[j] + a[i] > dp1[i]:
                    dp1[i] = dp1[j] + a[i]
    
    # Compute dp2: maximum sum decreasing subsequence starting at i
    for i in range(n-1, -1, -1):
        dp2[i] = a[i]
        for j in range(i+1, n):
            if a[j] < a[i]:
                if dp2[j] + a[i] > dp2[i]:
                    dp2[i] = dp2[j] + a[i]
    
    # Find the maximum bitonic sum
    max_sum = 0
    for i in range(n):
        current = dp1[i] + dp2[i] - a[i]
        if current > max_sum:
            max_sum = current
    print(max_sum)