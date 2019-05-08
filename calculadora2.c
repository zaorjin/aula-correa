#include <stdio.h>
#define limite 0
short int maisoumenos(float);
int mais(float n, float N);
int menos(float n, float N);
int multiplicar(float n, float N);
int dividir(float n, float N);

int main(){
    float num,Num;
    char o;
    printf("\nDigite dois numero: \n\n");
    scanf("%f",&num);
    getchar();
    scanf("%f",&Num);
    getchar();
    printf("Escolha a Operacao\n");
    scanf("%c",&o);
    getchar();
    if(o=='+'){
        mais(num,Num)
    }
    if(o=='-'){
        menos(num,Num)
    }
    if(o=='*'){
        multiplicar(num,Num)
    }
    if(o=='/'){
        dividir(num,Num)
    }


return(0);

}
//FUNCOES----------------------------
int mais(float n,float N){
  float r;
  r=n+N;
  printf("%f",r);

 return(0);
}

int menos(float n,float N){
  float r;
  r=n-N;
  printf("%f",r);

 return(0);
}

int multiplicar(float n,float N){
  float r;
  r=n*N;
  printf("%f",r);

 return(0);
}

int dividir(float n,float N){
  float r;
  r=n/N;
  printf("%f",r);

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



