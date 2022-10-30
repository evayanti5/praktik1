detik_a = int(input())
hari    = detik_a / 86400
detik1  = detik_a % 86400
jam     = detik1 / 3600
detik2  = detik1 % 3600
menit   = detik2 / 60
detik   = detik2 % 60
if detik_a > 86400:
      print("%d hari %02d:%02d:%02d" %(hari, jam, menit, detik))
else:
      print("%02d:%02d:%02d" %(jam, menit, detik))