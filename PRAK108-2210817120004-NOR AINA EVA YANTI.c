#include <stdio.h>

int main()
{
    float phi,putaran,jaraktempuh,jarijari,keliling;
    phi=3.14;
    putaran=5;
    jaraktempuh=14;
    keliling=jaraktempuh/putaran;
    jarijari=keliling/(2*phi);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n", jaraktempuh);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah : %.2f Kilometer\n", jarijari);
}
