def MaksBilangan(nilai):
    return max(nilai)

def MinimBilangan(nilai):
    return min(nilai)

jumlah = int(input())
nilai = []

while len(nilai) < jumlah:
    nilai.extend(map(int, input().split()))

maks = MaksBilangan(nilai)
minim = MinimBilangan(nilai)

print(f"\n{maks} {minim}")
