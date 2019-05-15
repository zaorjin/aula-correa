#include <stdio.h>

int main (){

int a,r=0,i1=0,i2=0,d=0,b=92,f,r2=1,c=0,c2=0;
printf("Digite o numero maximo de linhas impar : ");
scanf("%d",&a);
r=a;
while(i1<a/2+1){
    while(d!=f){
        printf(" ");
        f++;
    }
    printf("%c",b);
    c=0;
    while(c<r-r2){
        printf(" ");
        c++;
    }
    c=0;
    while(c<r2){
        printf("*");
        c++;
    }
    c=0;
    while(c<r-r2){
        printf(" ");
        c++;
    }
    printf("/");
    r2+=2;
    i1++;
    printf("\n");
    d++;
    f=0;

}
r2-=2;
while(i1<a){
    r2-=2;
    while(d!=f){
        printf(" ");
        f++;
    }
    printf("%c",b);
    c=0;
    while((c<r2)&&(r2<=a+1/2)){
        printf("*");
        c++;
    }
    printf("/");
    i1++;
    printf("\n");
    d++;
    f=0;

}
d=1;
i1=0;
f=a;
r2=a;
while(i1<a/2+1){
    while(d!=f){
        printf(" ");
        f--;
    }
    printf("/");
    c=0;
    while(c<=a-r2){
        printf("*");
        c++;
    }
    c=0;
    while(c<1){
        printf("%c",b);
        c++;
    }
    i1++;
    printf("\n");
    d++;
    f=a;
    r2-=2;
}
f=a;
r2=a-2;
while(i1<a){
    while(d<f){
        printf(" ");
        f--;
    }
    c=0;
    printf("/");
    while(c<r-r2){
        printf(" ");
        c++;
    }
    c=0;
    while(c<r2){
        printf("*");
        c++;
    }
    c=0;
    while(c<r-r2){
        printf(" ");
        c++;
    }
    printf("%c",b);
    i1++;
    printf("\n");
    d++;
    f=a;
    r2-=2;
}


return(0);
}
