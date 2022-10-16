#include <stdio.h>

int main()
{
    int a,b,x,y, total, sisa;
    a=9;
    b=5;
    x=8;
    y=8;
    sisa=(a%b)+(x%y);
    printf("variabel a bernilai %d\n", a);
    printf("variabel b bernilai %d\n", b);
    printf("variabel x bernilai %d\n", x);
    printf("variabel y bernilai %d\n", y);
    printf("total sisa bagi dari a dibagi b dan x dibagi y adalah %d", sisa);
    return 0;
}
