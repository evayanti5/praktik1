#include <stdio.h>

int main()
{
    int A,B,hasil1, hasil2;
    A=40000;
    B=35000;
    printf("harga sepatu A adalah %d\n",A);
    printf("harga sepatu B adalah %d\n",B);
    hasil1 = A-(A*13/100);
    hasil2 = B-(B*21/100);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n",hasil1);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n",hasil2);
}
