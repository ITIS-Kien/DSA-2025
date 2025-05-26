from collections import deque

def min_operations(s, t):
    if s >= t:
        return s - t  
    queue = deque([(s, 0)]) 
    visited = set([s])
    while queue:
        current, steps = queue.popleft()
        if current == t:
            return steps
        if current * 2 <= 10000 and current * 2 not in visited:
            if current * 2 == t:
                return steps + 1
            queue.append((current * 2, steps + 1))
            visited.add(current * 2)
        if current - 1 > 0 and current - 1 not in visited:
            if current - 1 == t:
                return steps + 1
            queue.append((current - 1, steps + 1))
            visited.add(current - 1)
    return -1 

t = int(input())
for _ in range(t):
    s, t = map(int, input().split())
    print(min_operations(s, t))
