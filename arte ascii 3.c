#include <stdio.h>

int main(){
    int l1=0,c1=0,n1,cc;
    printf("\nInforme o tamanho da maior linha par: ");
    scanf("%d",&n1);
    if(n1%2!=0){
        printf("numero de linhas tem que ser impar numero maximo eh: %d",n1+1);
        n1++;
    }
    printf("\n");
    cc=n1;
    do{
        c1=0;
        printf("\n");
        if(cc==n1){
            while(c1<n1){
                printf("*");
                c1++;
            }
        }else{
            while(c1<n1/2){
                printf("*");
                c1++;
            }
            c1=0;
            while(c1<cc-n1){
                printf(" ");
                c1++;
            }
            c1=0;
            while(c1<n1/2){
                printf("*");
                c1++;
            }
        }
        n1-=2;
    }while(n1>0);

    while((n1<cc)||(n1==cc)){
            c1=0;
            if(cc==n1){
                while(c1<n1){
                    printf("*");
                    c1++;
                }
            }else{
                while(c1<n1/2){
                    printf("*");
                    c1++;
                    }
                c1=0;
                while(c1<cc-n1){
                    printf(" ");
                    c1++;
                }
                c1=0;
                while(c1<n1/2){
                    printf("*");
                    c1++;
                }
            }

                n1+=2;
                printf("\n");
            }

 return(0);
}
