#include <stdio.h>

int main(){
    int l=0,c=0,n;
    printf("\nInforme o tamanho da maior linha: ");
    scanf("%d",&n);
    while(l<n){
        c=0;
        printf("\n");
        while(c<n){
            printf("*");
            c++;
        }
        n--;
    }

return(0);
}
