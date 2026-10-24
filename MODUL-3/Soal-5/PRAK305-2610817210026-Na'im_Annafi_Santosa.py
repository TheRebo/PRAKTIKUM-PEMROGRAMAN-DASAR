total_detik = int(input())

hari, sisa_detik = divmod(total_detik, 86400)
jam, sisa_detik = divmod(sisa_detik, 3600)
menit, detik = divmod(sisa_detik, 60)

if hari > 0:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")