#include <stdio.h>
#define limite 0
short int maisoumenos(float);
float mais(float n, float N);
float menos(float n, float N);
float multiplicar(float n, float N);
float dividir(float n, float N);

int main(){
    float num,Num;
    char o;
    printf("\nDigite dois numero: \n\n");
    scanf("%f",&num);
    getchar();
    scanf("\n%f",&Num);
    getchar();
    printf("Escolha a Operacao\n");
    scanf("%c",&o);
    getchar();

    if(o=='+'){
        mais(num,Num);
    }
    if(o=='-'){
        menos(num,Num);
    }
    if(o=='*'){
        multiplicar(num,Num);
    }
    if(o=='/'){
            if(Num!=0){
                dividir(num,Num);
            }else{
                printf("Divisao por 0 IMPOSSIVEL");
            }
    }
    if((o!='+')&&(o!='-')&&(o!='*')&&(o!='/')){
        printf("Operacao invalida");
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


short int maisoumenos(float i){

        if(i>=limite){
        printf("\nPOSITIVO\n");
        return(1);
        }
        else{
        printf("\nNEGATIVO\n");
        return(-1);
            }
}



