#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcao;
    printf("Menu de opcoes\n");
    printf("(W) ciclo while\n");
    printf("(D) ciclo do...while\n");
    printf("(F) ciclo for");
    printf("(S) sair\n");
    printf("\tOPCAO -> _\n");
    scanf(" %c", &opcao);
    switch(opcao){
    case'W':
    case'w': cwhile();
    break;
    case'D':
    case'd': cdoWhile();
    break;
    case'F':
    case'f': cfor();
    break;
    case'S':
    case's':
    break;
    }

    return 0;
}

int cwhile(){

    int num, cont=0, soma=0;
    printf("insira um numero");
    scanf("%i",&num);
    while(num<0){
    printf("insira um numero: ");
    scanf("%i",&num);
    }
    while(cont<num){
    cont++;
    soma=num+soma;
    }
    printf("%i",soma);
    return num;
}

int cdoWhile(){
    int num, cont=0, soma=0;

    do{
        printf("insira um numero: ");
        scanf("%i",&num);
    }while(num<0);

    do{
        cont++;
        soma=num+soma;
    }while(cont<num);
    printf("%i",soma);
    return num;
}
void cfor(){
    int num, cont=0, soma=0;
    do{
        printf("insira um numero: ");
        scanf("%i",&num);
    }while(num<0);

    for(cont; cont<num; cont++){
        soma=num+soma;
    }
    printf("%i",soma);
    return num;
}

