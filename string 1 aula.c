#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char nome[150];
    int tamanho;
    memset(&nome,'\0' ,150);
    printf("Digite seu nome: ");
    scanf("%[^\n]s", nome);
    tamanho=strlen(nome);
    for(int c=0; c<tamanho; c++){
        printf("\n%c", nome[c]);
    }

return(0);
}
