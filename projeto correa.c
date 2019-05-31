#include <stdio.h>
#define M_alunos 60

void registrar ();
void mostrar ();
void procurar ();

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
    int ra;

}typedef aluno;

int i = 0;
aluno a[M_alunos];

int main(){
    char opcao;
    do {
        printf("Deseja adicionar(+), mostrar(m), procurar(p) parar(s): ");
        scanf("%c", &opcao);
        getchar();
        printf("\n");

        switch (opcao){
            case '+':
                registrar();
            break;

            case 'm':
                mostrar();
            break;

            case 'p':
                procurar();
            break;
        }
    }while (opcao!='s');

return(0);

}


void mostrar(){

    int b=0;
    for(; b<i; b++){

        printf("Aluno: %s dono do RA: %d\n", a[b].nome,a[b].ra);
        printf("Tem notas %0.2f, %0.2f, %0.2f, %0.2f e media: %0.2f\n\n", a[b].nota.n1, a[b].nota.n2, a[b].nota.n3, a[b].nota.n4, a[b].media);

    }
}

void procurar(){
    char p[250];
    int b=0;
    printf("Digite o nome do aluno: ");
    scanf("%s", p);
    getchar();

    for(; b<i; b++){

        if(p==a[b].nome){
            printf("Aluno: %s dono do RA: %d\n", a[b].nome,a[b].ra);
            printf("Tem notas %0.2f, %0.2f, %0.2f, %0.2f e media: %0.2f\n\n", a[b].nota.n1, a[b].nota.n2, a[b].nota.n3, a[b].nota.n4, a[b].media);
        }

    }

}

void registrar(){

    printf("Digite o nome do aluno: \n ");
    scanf("%[^\n]s", &a[i].nome);
    getchar();

    printf("Numero do RA do aluno: \n ");
    scanf("%d", &a[i].ra);
    getchar();

    printf("Valor da nota 1: \n ");
    scanf("%f", &a[i].nota.n1);
    getchar();

    printf("Valor da nota 2: \n ");
    scanf("%f", &a[i].nota.n2);
    getchar();

    printf("Valor da nota 3: \n ");
    scanf("%f", &a[i].nota.n3);
    getchar();

    printf("Valor da nota 4: \n ");
    scanf("%f", &a[i].nota.n4);
    getchar();

    printf("\n");

    a[i].media = (a[i].nota.n1 + a[i].nota.n2 + a[i].nota.n3 + a[i].nota.n4) / 4;
    i++;


}
