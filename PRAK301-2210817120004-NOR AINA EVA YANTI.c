#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a < b){printf("%d %d", a, b);}
    else if (a > b){printf("%d %d", b, a);}
    else if (a < b){printf("%d %d", a, b);}
    else if (a > b){printf("%d %d", b, a);}
    else {printf("%d %d", a, b);}
    main();
    return 0;
}
