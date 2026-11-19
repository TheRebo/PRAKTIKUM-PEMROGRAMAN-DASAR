def Reverse(nilai):
    balik = 0
    while nilai > 0:
        balik = balik * 10 + nilai % 10
        nilai //= 10
    return balik

nilai1, nilai2 = map(int, input().split())

nilai1 = Reverse(nilai1)
nilai2 = Reverse(nilai2)
tambah = nilai1 + nilai2
hasil = Reverse(tambah)

print(f"\n{hasil}")
