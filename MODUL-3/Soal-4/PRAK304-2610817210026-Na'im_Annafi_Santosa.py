bilangan = int(input())

if bilangan == 0:
    print("Nol")
elif bilangan < 10:
    print("Satuan")
elif bilangan < 20:
    print("Belasan")
elif bilangan < 100:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")