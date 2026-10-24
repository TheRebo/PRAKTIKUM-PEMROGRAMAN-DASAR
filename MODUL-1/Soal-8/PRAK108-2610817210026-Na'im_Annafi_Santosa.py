import math

jumlah_putaran = 5
jarak_tempuh = 14

keliling_putaran = jarak_tempuh / jumlah_putaran

jari_jari = keliling_putaran / (2 * math.pi)

print("Diketahui :")
print(f"Pak Dengklek mengelilingi taman = {jumlah_putaran} Putaran")
print(f"Jarak tempuh Pak Dengklek = {jarak_tempuh} Kilometer \n")

print("Jawaban :")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jari_jari:.2f} Kilometer")