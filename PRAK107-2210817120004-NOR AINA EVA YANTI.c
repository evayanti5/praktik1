#include <stdio.h>

int main()
{
    int sisi1,sisi2,sisi3,keliling,harga,biaya;
    sisi1=4;
    sisi2=5;
    sisi3=7;
    harga=85000;
    keliling=16;
    biaya=keliling*harga;
    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",sisi1,sisi2,sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga);
    printf("Biaya yang diperlukan Pak Dengklek adalah: Rp.%d\n", biaya);
}
