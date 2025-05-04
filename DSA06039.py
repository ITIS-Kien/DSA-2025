T = int(input())
for _ in range(T) :
    n = int(input())
    a = list(map(int, input().split()))
    m = {}
    ans = []
    for i in range(n) :
        if a[i] in m : 
            ans.append(m[a[i]])
        else : m[a[i]] = i
    if len(ans) == 0 : print("NO")
    else : 
        ans.sort()
        print(a[ans[0]])
    