#include <stdio.h>

int main()
{
    int bilangan;
    scanf("%d",&bilangan);
    if((bilangan>=1)&&(bilangan<10)){
        printf("Satuan\n");
    }
    else if(bilangan==0){
        printf("Nol\n");
    }
    else if((bilangan>10)&&(bilangan<20)){
        printf("Belasan\n");
    }
    else if((bilangan>=20)&&(bilangan<=99)){
        printf("Puluhan\n");
    }
    else{
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }
    main();
    return 0;
}
