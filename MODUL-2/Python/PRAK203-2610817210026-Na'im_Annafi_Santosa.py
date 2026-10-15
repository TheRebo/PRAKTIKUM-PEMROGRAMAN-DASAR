data = []

while len(data) < 6:
    data.extend(map(float, input().split()))

a, b, i, j, x, y = data

hasil = (a - b) * (i / j) - (x + y)

print(f"\n{hasil:.3f}")