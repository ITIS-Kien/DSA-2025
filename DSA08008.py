from collections import deque

t = int(input())
for _ in range(t):
    n = int(input())
    queue = deque(["1"])  
    while queue:
        num = queue.popleft()  
        if int(num) % n == 0: 
            print(num)
            break
        queue.append(num + "0")
        queue.append(num + "1")