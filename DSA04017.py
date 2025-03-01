import sys
def binary_search(arr, x):
    l, r = 0, len(arr) - 1
    while l <= r:
        mid = l + (r - l) // 2
        if arr[mid] == x:
            return mid
        elif arr[mid] < x:
            l = mid + 1
        else:
            r = mid - 1
    return -1

data = sys.stdin.read().splitlines()
i = iter(data)

t = int(next(i))
while t > 0:
    n = int(next(i))
    f1 = list(map(int, next(i).split()))
    f2 = list(map(int, next(i).split()))
    f1_len = len(f1)
    for j in range(f1_len):
        if(binary_search(f2, f1[j]) == -1):
            sys.stdout.write(str(j + 1) + '\n')
            break
    t -= 1
