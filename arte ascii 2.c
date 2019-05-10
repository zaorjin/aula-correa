#include <stdio.h>

int main(){
    int c=0,n,d;
    printf("\nInforme o tamanho da maior linha: ");
    scanf("%d",&n);
    d=n;
    while(0<n){
        c=0;
        printf("\n");
        while(c<n){
            printf("*");
            c++;
        }
        n--;
    }
    while(n<d){
        n++;
        c=0;
        printf("\n");
        while(c<n){
            printf("*");
            c++;
        }

    }


return(0);
}
