from collections import deque

t = int(input())
for _ in range(t):
    n = int(input())
    dq = deque(["6", "8"])  
    res = [] 
    while dq:
        num = dq.popleft()
        if len(num) > n:  
            break
        res.append(num)
        dq.append(num + "6") 
        dq.append(num + "8")  
    print(len(res))
    res = res[::-1]
    print(*res)
