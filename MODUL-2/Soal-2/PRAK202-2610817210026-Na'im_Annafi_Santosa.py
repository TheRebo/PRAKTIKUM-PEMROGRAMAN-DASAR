input_pertama = float(input("Masukkan Nilai Pertama : "))
input_kedua = float(input("Masukkan Nilai Kedua : "))

hasil_penjumlahan = input_pertama + input_kedua

nilai_pertama = int(input_pertama) if input_pertama.is_integer() else input_pertama
nilai_kedua = int(input_kedua) if input_kedua.is_integer() else input_kedua

print(f'\nHasil dari penjumlahan nilai pertama "{nilai_pertama}" dan nilai kedua "{nilai_kedua}" adalah "{hasil_penjumlahan:.2f}"')