#include <stdio.h>

int main()
{
    float nilai1,nilai2,hasil;
    printf("Masukkan Nilai Pertama  :"); scanf("%f",&nilai1);
    printf("Masukkan Nilai Kedua    :"); scanf("%f",&nilai2);
    hasil=nilai1+nilai2;
    printf("Hasil dari penjumlahan nilai pertama \"%.f\" dan nilai kedua \"%.1f\" adalah \%.2f\"",nilai1,nilai2,hasil);
}
