#include <stdio.h>
#include <ctype.h>
#include <string.h>
short int cvogal(char c);

int main(){
    char nome[150], mvogais[150];
    int tamanho,cont=0,c=0;
    memset(&nome,'\0' ,150);
    memset(&mvogais,'\0' ,150);
    printf("Digite seu nome: ");
    scanf("%[^\n]s", nome);
    getchar();
    for(int i=0;i<strlen(nome);i++){
        if(cvogal(nome[i])){
            mvogais[c]=nome[i];
            c++;
            cont++;
        }
    }

    printf("\nVogais: %s",mvogais);
    printf("\nQuantidade de vogais: %d",cont);
    return(0);
}

short int cvogal(char c){
    char vogal[5]={'a','e','i','o','u'};
    for (int i=0; i<5; i++){
        if(c==vogal[i]){
            return(1);
        }
    }
    return (0);
    }

