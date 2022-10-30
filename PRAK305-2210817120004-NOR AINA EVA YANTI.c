#include <stdio.h>

int main ()
{
      int hari, jam, menit, detik_a, detik1, detik2, detik;
      scanf("%d", &detik_a);
      hari    = detik_a / 86400;
      detik1 = detik_a % 86400;
      jam     = detik1 / 3600;
      detik2 = detik1 % 3600;
      menit   = detik2 / 60;
      detik   = detik2 % 60;
      if (detik_a <= 86400)
      {
            printf("%.2d:%.2d:%.2d\n", jam, menit, detik);
      }
      else if (detik_a > 86400)
      {
            printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
      }
      main();
      return 0;
}
