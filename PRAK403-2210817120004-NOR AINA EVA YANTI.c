#include <stdio.h>

int main()
{
    int bilangan1, bilangan2, a, b;
    for (int i=0; i<=3; i++){
    scanf("%d %d", &bilangan1, &bilangan2);
    if(bilangan1<bilangan2){
    for(a=bilangan1, b=bilangan2; a<=bilangan2, b>=bilangan1; a++, b--){
        printf("%d %d", a, b);
        if(a == bilangan2){
            break;}
        else{
            printf(" - ");}
        }
    }
    else{
    for(a=bilangan1, b=bilangan2; a>=bilangan2, b<=bilangan1; a--, b++){
        printf("%d %d", a, b);
        if(b == bilangan1){
            break;}
        else{
            printf(" - ");}
    }
    }
}
}
