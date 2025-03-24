t = int(input())
for _ in range(t) :
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    m = 1e9
    for i in range(n - 1) :
        m = min(m, a[i + 1] - a[i])
    print(m)
# Time complexity: O(nlogn)
# Space complexity: O(n)    
