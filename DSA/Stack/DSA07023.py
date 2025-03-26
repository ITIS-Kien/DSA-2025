t = int(input())
for _ in range (t) :
    data = list(map(str, input().strip().split()))
    rev = []
    for word in data :
        rev.append(word)
    while len(rev) > 0 :
        print(rev.pop(), end=' ')
    print()