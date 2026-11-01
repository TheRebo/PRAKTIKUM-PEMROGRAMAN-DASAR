angka_pertama, angka_kedua = map(int, input().split())

if angka_pertama < angka_kedua:
    arah = 1
    selisih = angka_kedua - angka_pertama
else:
    arah = -1
    selisih = angka_pertama - angka_kedua

jumlah_pasangan = selisih + 1

daftar_pasangan = []

for nomor_pasangan in range(jumlah_pasangan):
    angka_kiri = angka_pertama + nomor_pasangan * arah
    angka_kanan = angka_kedua - nomor_pasangan * arah
    daftar_pasangan.append(str(angka_kiri) + " " + str(angka_kanan))

print(" - ".join(daftar_pasangan))