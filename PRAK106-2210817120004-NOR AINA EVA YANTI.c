#include <stdio.h>

int main()
{
    int a,b,c, hasil1, hasil2, hasil3;
    a=4;
    b=8;
    c=3;
    hasil1 = a==b;
    hasil2 = a>=c;
    hasil3 = a!=c;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", hasil1);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", hasil2);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", hasil3);
}
