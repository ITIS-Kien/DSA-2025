def BackTrack(a, k, idx, ans, s = ""):
    if k == 0 : 
        s = s.strip()
        ans.append(s[::-1])
        return
    for i in range(idx, len(a)):
        if a[i] <= k:
            BackTrack(a, k - a[i], i, ans, s + str(a[i]) + " ")

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    a = sorted(a, reverse=True)
    ans = []    
    BackTrack(a, k, 0, ans)
    ans.sort()
    if len(ans) == 0 : print(-1)
    else : 
        print(len(ans), end = " ")
        for i in ans:
            print("{" + i + "}", end = " ")
    print()
