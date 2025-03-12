from collections import deque

T = int(input())
for _ in range(T) :
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    dq = deque()
    dq.append(0)
    for i in range(1, k) :
        while(len(dq) > 0 and a[dq[-1]] < a[i]) : dq.pop()
        dq.append(i)
    print(a[dq[0]], end=" ")
    for i in range(k, n) :
        while(len(dq) > 0 and a[dq[-1]] < a[i]) : dq.pop()
        dq.append(i)
        if(i - dq[0] < k) : print(a[dq[0]], end=" ")
        else :
            dq.popleft()
            print(a[dq[0]], end=" ")
    print()
