def Selisih(nilai1, nilai2):
    return nilai1 - nilai2

def Mutlak(nilai):
    return abs(nilai)

x1, y1, x2, y2 = map(int, input().split())

jarak = Mutlak(Selisih(x1, x2)) + Mutlak(Selisih(y1, y2))

print(f"\n{jarak}")
