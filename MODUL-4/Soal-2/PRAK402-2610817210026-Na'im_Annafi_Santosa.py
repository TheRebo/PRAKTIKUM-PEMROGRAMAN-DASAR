batas = int(input())

if batas % 2 == 0:
    genap_terbesar = batas
else:
    genap_terbesar = batas - 1

daftar_ganjil = []
for angka in range(1, batas + 1, 2):
    daftar_ganjil.append(str(angka))

daftar_genap = []
for angka in range(genap_terbesar, 1, -2):
    daftar_genap.append(str(angka))

print(" ".join(daftar_ganjil))
print(" ".join(daftar_genap))