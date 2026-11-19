def MaksBilangan(nilai1, nilai2, nilai3, nilai4):
    return max(nilai1, nilai2, nilai3, nilai4)

nilai1, nilai2, nilai3, nilai4 = map(int, input().split())

hasil = MaksBilangan(nilai1, nilai2, nilai3, nilai4)

print(f"\n{hasil}")
