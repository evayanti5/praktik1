#include <stdio.h>

int main()
{
    float r,t,volume,luas,keliling;
    printf("");
    scanf("%f",&r);
    printf("");
    scanf("%f",&t);
    volume=r*r*t*22/7;
    luas=2*r*(r+t)*22/7;
    keliling=2*r*22/7;
    printf("Volume  =%.2f\n",volume);
    printf("Luas    =%.2f\n",luas);
    printf("Keliling=%.2f\n",keliling);
    printf("\n");
    printf("");
    scanf("%f",&r);
    printf("");
    scanf("%f",&t);
    volume=r*r*t*22/7;
    luas=2*r*(r+t)*22/7;
    keliling=2*r*22/7;
    printf("Volume  =%.2f\n",volume);
    printf("Luas    =%.2f\n",luas);
    printf("Keliling=%.2f",keliling);
}
