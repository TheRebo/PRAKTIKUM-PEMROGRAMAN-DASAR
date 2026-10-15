import math

data = []

while len(data) < 2:
    data.extend(map(float, input().split()))

tinggi, sisi_miring = data

alas = math.sqrt(pow(sisi_miring, 2) - pow(tinggi, 2))
keliling = tinggi + sisi_miring + alas
luas = 0.5 * alas * tinggi

alas = int(alas) if alas.is_integer() else alas
tinggi = int(tinggi) if tinggi.is_integer() else tinggi
keliling = int(keliling) if keliling.is_integer() else keliling
luas = int(luas) if luas.is_integer() else luas

print(f"\nAlas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm^2")