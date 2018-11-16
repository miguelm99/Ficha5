#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Início da funcao principal – main\n");
    funcao1();
    printf("Estou entre as chamadas das funções 1 e 2\n");
    funcao2();
    printf("Fim da funcao main\n");
    return 0;
}

void funcao1(){
    printf("Estou na funcao 1\n");
}

void funcao2(){
    printf("Estou na funcao 2\n");
}
