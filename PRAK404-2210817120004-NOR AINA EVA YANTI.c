#include <stdio.h>

int main()
{
    int a;
    float nilai1,nilai2,hasil1,hasil2,hasil3,hasil4;
    menu:
        printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &a);
        if(a>1 && a<=4){
            printf("Masukkan nilai pertama: "); scanf("%f",&nilai1);
            printf("Masukkan nilai kedua: "); scanf("%f",&nilai2);
                if(a==1){hasil1 = nilai1 + nilai2;
                printf("Hasil Penjumlahan antara %.2f dan %.2f adalah %.2f\n\n", nilai1,nilai2,nilai1 + nilai2);
                goto menu;}
                else if(a==2){hasil2 = nilai1 - nilai2;
                printf("Hasil Pengurangan antara %.2f dan %.2f adalah %.2f\n\n", nilai1,nilai2,nilai1 - nilai2);
                goto menu;}
                else if(a==3){hasil3 = nilai1 * nilai2;
                printf("Hasil Perkalian antara %.2f dan %.2f adalah %.2f\n\n", nilai1,nilai2,nilai1 * nilai2);
                goto menu;}
                else if(a==4){hasil4 = nilai1 / nilai2;
                printf("Hasil Pembagian antara %.2f dan %.2f adalah %.2f\n\n", nilai1,nilai2,nilai1 / nilai2);
                goto menu;}}
        else if(a==5){printf("Terima kasih, telah menggunakan kalkulator Nor Aina Eva Yanti\n");
        }
        else{printf("Input Anda salah, silahkan coba lagi\n\n");
        goto menu;}
}
