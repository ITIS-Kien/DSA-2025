t = int(input())
for _ in range(t):
    n ,k = map(int, input().split())
    a = list(map(int, input().split()))
    dict = {}
    cnt = 0
    for it in a :
        if it not in dict :
            dict[it] = 1
        else :
            dict[it] += 1
    for it in a:
        if k - it in dict:
            cnt += dict[k - it]
            dict[it] -= 1
        if k - it == it:
            cnt -= 1
    print(cnt)