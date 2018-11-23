#include <stdio.h>
#include <stdlib.h>

int num;

int main()
{
    char opcao;
    printf("Calculo de areas\n");
    printf("Triangulo: \t\t");
    printf("Retangulo: \n");
    printf("Circulo: \t\t");
    printf("Quadrado: \n");

    printf("Opcoes: \n");
    printf("\t(T)riangulo \n");
    printf("\t(R)etangulo \n");
    printf("\t(C)irculo \n");
    printf("\t(Q)uadrado \n");
    printf("\t(F)im \n");
    printf("Selecione a opcao: ");

    scanf(" %c", &opcao);

    switch(opcao){
    case 't':
    case 'T':
        break;
    case 'r':
    case 'R':
        break;
    case 'C':
    case 'c':
        break;
    case 'q':
    case 'Q':
        break;
    }
    return 0;
}

int leNumero(){

}

void areaTriangulo(){

}

void areaRetangulo(){

}

void areaQuadrado(){

}

void areaCirculo(){

}
