#include <stdio.h>
#include <ctype.h>
#define limite 0
float mais(float n, float N);
float menos(float n, float N);
float multiplicar(float n, float N);
float dividir(float n, float N);
unsigned short int repetir();

int main(){
    float num,Num,r;
    char o;
    while(repetir()){
        printf("\nDigite dois numero: \n\n");
        scanf("%f",&num);
        getchar();

        scanf("\n%f",&Num);
        getchar();

        printf("Escolha a Operacao\n");
        scanf("%c",&o);
        getchar();

    switch(o){
        case '+':
            mais(num,Num);
            break;
        case '-':
            menos(num,Num);
            break;
        case '*':
            multiplicar(num,Num);
            break;
        case '/':
            if(Num!=0){
            dividir(num,Num);
            break;
            }else{
                printf("IMPOSSIVEL Divisor = 0");
            }

        default:
            printf("\nOperacao Invalida\n");

    }
    }
return(0);

}
//FUNCOES----------------------------
float mais(float n,float N){
  float r;
  r=n+N;
  printf("\n%f",r);

 return(0);
}

float menos(float n,float N){
  float r;
  r=n-N;
  printf("\n%f",r);

 return(0);
}

float multiplicar(float n,float N){
  float r;
  r=n*N;
  printf("\n%f",r);

 return(0);
}

float dividir(float n,float N){
  float r;
  r=n/N;
  printf("\n%f",r);

 return(0);
}

unsigned short int repetir(){
    unsigned short int resp;
    int cont=0;
    while(cont<=2){
        printf("\nDESEJA CONTINUAR ?\n");
        resp = toupper(getchar());

        if(resp=='S'){
            return(1);
        }
        if(resp=='N'){
            return(0);
        }
        ++cont;
    }
}
