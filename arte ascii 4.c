#include <stdio.h>

int main(){
    int l1=0,c1=0,n1,cc;
    printf("\nInforme o tamanho da maior linha: ");
    scanf("%d",&n1);
    cc=n1;
    if(n1%2!=0){
    do{
        c1=0;
        printf("\n");
        if(c1!=cc){
            while(c1<(n1+1)/2){
                printf(" ");
                c1++;
            }
            c1=0;
            while(c1<=cc-n1){
                printf("*");
                c1++;
            }
            c1=0;
            while(c1<(n1+1)/2){
                printf(" ");
                c1++;
            }
        }else{
            while(c1<=cc)
            printf("*");
            c1++;
        }
        n1-=2;
    }while(n1>=0);

    while(n1<=cc){
        c1=0;
        printf("\n");
        if(c1!=cc){
            while(c1<(n1+1)/2){
                printf(" ");
                c1++;
            }
            c1=0;
            while(c1<=cc-n1){
                printf("*");
                c1++;
            }
            c1=0;
            while(c1<(n1+1)/2){
                printf(" ");
                c1++;
            }
        }else{
            while(c1<=cc)
            printf("*");
            c1++;
        }
        n1+=2;
    }
    }else{
        do{
        c1=0;
        printf("\n");
        if(c1!=cc){
            while(c1<(n1+2)/2){
                printf(" ");
                c1++;
            }
            c1=0;
            while(c1<=cc-n1){
                printf("*");
                c1++;
            }
            c1=0;
            while(c1<(n1+2)/2){
                printf(" ");
                c1++;
            }
        }else{
            while(c1<=cc)
            printf("*");
            c1++;
        }
        n1-=2;
    }while(n1>=0);

    while(n1<=cc){
        c1=0;
        printf("\n");
        if(c1!=cc){
            while(c1<(n1+2)/2){
                printf(" ");
                c1++;
            }
            c1=0;
            while(c1<=cc-n1){
                printf("*");
                c1++;
            }
            c1=0;
            while(c1<(n1+2)/2){
                printf(" ");
                c1++;
            }
        }else{
            while(c1<=cc)
            printf("*");
            c1++;
        }
        n1+=2;
    }

    }

 return(0);
}
