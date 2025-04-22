def Tower(n, a, b, c) :
    if n == 1 : 
        print(a + " -> " + c)
    else :
        Tower(n - 1, a, c, b)
        Tower(1, a, b, c)
        Tower(n - 1, b, a, c)

n = int(input())
Tower(n, 'A', 'B', 'C')