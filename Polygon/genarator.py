import random
# import os

def gentest(limit):
    t = random.randint(1, 1000)
    s = str(t) + "\n"
    return s

# Tạo thư mục 'input/' nếu chưa tồn tại
# os.makedirs("Polygon/input", exist_ok=True)

for i in range(1, 200):
    limit = int(1e6)
    filename = f"Polygon/input/{i}.in"
    with open(filename, "w") as f:
        f.write(gentest(limit))
