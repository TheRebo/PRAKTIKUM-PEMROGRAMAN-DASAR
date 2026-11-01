while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihan = int(input("Masukkan Pilihan : "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Na'im Handsome\n")
        break

    if pilihan < 1 or pilihan > 4:
        print("Input anda salah, silahkan coba lagi\n")
        continue

    nilai_pertama = float(input("Masukkan nilai pertama : "))
    nilai_kedua = float(input("Masukkan nilai kedua : "))

    if pilihan == 1:
        hasil = nilai_pertama + nilai_kedua
        print(f"Hasil penjumlahan antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}\n")
    elif pilihan == 2:
        hasil = nilai_pertama - nilai_kedua
        print(f"Hasil pengurangan antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}\n")
    elif pilihan == 3:
        hasil = nilai_pertama * nilai_kedua
        print(f"Hasil perkalian antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}\n")
    else:
        if nilai_kedua == 0:
            print("Tidak bisa dibagi dengan 0\n")
            continue
        hasil = nilai_pertama / nilai_kedua
        print(f"Hasil pembagian antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}\n")