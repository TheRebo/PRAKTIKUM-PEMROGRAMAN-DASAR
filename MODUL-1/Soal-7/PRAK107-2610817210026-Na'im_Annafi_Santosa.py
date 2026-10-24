sisi_a = 4
sisi_b = 5
sisi_c = 7
harga_per_meter = 85000

keliling_tanah = sisi_a + sisi_b + sisi_c
total_biaya = harga_per_meter * keliling_tanah

print("Diketahui :")
print(f"Panjang sisi segitiga berturut-turut adalah {sisi_a:d}, {sisi_b:d}, dan {sisi_c:d}")
print(f"Keliling Tanah Pak Dengklek adalah {keliling_tanah:d}")
print(f"Harga tanah Per Meter adalah {harga_per_meter:d}")

print("Jawaban :")
print(f"Biaya yang diperlukan Pak Dengklek adalah : Rp {total_biaya:d}")