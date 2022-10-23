#include <stdio.h>
#include <math.h>

int main()
{
    float A,B,C,alas,tinggi,keliling,luas;
    scanf("%f %f",&A,&B);
    C       =sqrt(B*B-A*A);
    luas    =1*A*C/2;
    keliling=A+B+C;
    printf("Alas    =%.f cm\n", C);
    printf("Tinggi  =%.f cm\n", A);
    printf("Keliling=%.f cm\n", keliling);
    printf("Luas    =%.f cm^2\n\n", luas);
    scanf("%f",&A);
    scanf("%f",&B);
    C       =sqrt(B*B-A*A);
    luas    =1*A*C/2;
    keliling=A+B+C;
    printf("Alas    =%.f cm\n", C);
    printf("Tinggi  =%.f cm\n", A);
    printf("Keliling=%.f cm\n", keliling);
    printf("Luas    =%.f cm^2", luas);
}
