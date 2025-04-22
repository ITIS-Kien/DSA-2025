import random
import os

def gentest():
    t = random.randint(1, 100)
    inp = str(t) + "\n"
    while t > 0 :
        t -= 1
        slen = random.randint(15, 900)
        s = str(random.randint(1, int(1e9)))
        while len(s) < slen:
            s += "+" + str(random.randint(1, int(1e9)))
        inp += s + "\n"
    return inp

# Tạo thư mục 'input/' nếu chưa tồn tại
os.makedirs("Polygon/input", exist_ok=True)

for i in range(1, 100):
    filename = f"Polygon/input/{i}.in"
    with open(filename, "w") as f:
        f.write(gentest())
