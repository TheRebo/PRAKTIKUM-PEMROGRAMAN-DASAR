kelipatan_str, simbol = input().split()
kelipatan_int = int(kelipatan_str)

daftar_hasil = []

for angka in range(1, 51):
    if angka % kelipatan_int == 0:
        daftar_hasil.append(simbol)
    else:
        daftar_hasil.append(str(angka))

print(" ".join(daftar_hasil))