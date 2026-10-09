harga_sepatu_a = 400000
harga_sepatu_b = 350000
diskon_sepatu_a = 13
diskon_sepatu_b = 21

harga_akhir_a = harga_sepatu_a * (100 - diskon_sepatu_a) / 100
harga_akhir_b = harga_sepatu_b * (100 - diskon_sepatu_b) / 100

print(f"Harga sepatu A adalah {harga_sepatu_a}")
print(f"Harga sepatu B adalah {harga_sepatu_b}")

print(f"Sepatu A mendapat diskon {diskon_sepatu_a}% sehingga harganya menjadi {harga_akhir_a:.0f}")
print(f"Sepatu B mendapat diskon {diskon_sepatu_b}% sehingga harganya menjadi {harga_akhir_b:.0f}")