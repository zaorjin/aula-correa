#include <stdio.h>

#define M_alunos 60

struct notas_aluno{

    float n1;
    float n2;
    float n3;
    float n4;

} typedef notas;

struct registro_alunos{

    char nome[250];
    notas nota;
    float media;

}typedef aluno;


int main(){
    printf


}





void registrar(){
    aluno a;
    int i = 0;

    printf("Digite o nome do aluno: \n ");
    scanf("%[^\n]s", a[i].nome);

    printf("Numero do RA do aluno: \n ");
    scanf("%[^\n]s", a[i].ra);

    printf("Valor da nota 1: \n ");
    scanf("%[^\n]s", a[i].nota.n1);

    printf("Valor da nota 2: \n ");
    scanf("%[^\n]s", a[i].nota.n2);

    printf("Valor da nota 3: \n ");
    scanf("%[^\n]s", a[i].nota.n3);

    printf("Valor da nota 4: \n ");
    scanf("%[^\n]s", a[i].nota.n4);

    a[i].media = a[i].nota.n1 + a[i].nota.n2 + a[i].nota.n3 + a[i].nota.n4 / 4;

    i++;

}

