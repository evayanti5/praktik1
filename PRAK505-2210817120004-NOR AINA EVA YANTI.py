def Biodata(tahun, nama, asal):
    tahun_sekarang=2020
    tahun=int(tahun)
    print("\nPerkenalkan nama saya : ", nama)
    print("Umur saya : ", tahun_sekarang - tahun)
    print("Saya adalah Angkatan : ", tahun_sekarang)
    print("Asal Saya dari : ", asal)
tahunlahir=int(input())
Namaku=input()
Asal=input()
Biodata(tahunlahir, Namaku, Asal)