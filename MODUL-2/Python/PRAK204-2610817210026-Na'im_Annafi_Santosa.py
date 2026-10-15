data = []

while len(data) < 2:
    data.extend(map(float, input().split()))

jari_jari, tinggi = data
PI = 22 / 7

volume =  PI * pow(jari_jari, 2) * tinggi
luas = 2 * PI * jari_jari * (jari_jari + tinggi)
keliling = 2 * PI * jari_jari

print(f"\nVolume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")