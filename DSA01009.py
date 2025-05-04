ans = []
def Backtrack(n, k, s = "", i = 0):
    if i == n:
        cnt = 0
        tmp = 0
        check = True
        for it in s:
            if it == "A": tmp += 1
            else : 
                if tmp == k: cnt += 1
                tmp = 0
        if tmp == k: cnt += 1
        if cnt != 1 : check = False
        if check : ans.append(s)
        return
    Backtrack(n, k, s + "A", i + 1)
    Backtrack(n, k, s + "B", i + 1)


n, k = map(int, input().split())
Backtrack(n, k)
print(len(ans))
for it in ans : print(it)