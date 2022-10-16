#include <stdio.h>

int main()
{
    float a,b,x,y,hasil;
    a=9;
    b=6;
    x=10;
    y=7;
    hasil=(a+b)*x/y;
    printf("Variabel a bernilai 9\n", a);
    printf("Variabel b bernilai 6\n", b);
    printf("Variabel x bernilai 10\n", x);
    printf("Variabel y bernilai 7\n", y);
    printf("Hasil dari a ditambah b dikali x dibagi y adalah %.2f", hasil);
}
