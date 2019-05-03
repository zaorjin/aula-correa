#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char nome[150], vogal[5]={'a','e','i','o','u'};
    int tamanho,cont=0;
    memset(&nome,'\0' ,150);
    printf("Digite seu nome: ");
    scanf("%[^\n]s", nome);
    getchar();
    tamanho=strlen(nome);
    for(int i=0;i<tamanho;i++){
        for(int c=0;c<5;c++){
            if(nome[i]==vogal[c]){
                cont++;
            }
        }
    }
    printf("%d",cont);

    return(0);
}
