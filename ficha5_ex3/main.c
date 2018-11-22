#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2;
    int som, sub, p12, p21;
    float rn1, rn2;
    printf("Indique o valor de N1: ");
    scanf("%i", &num1);
    printf("Indique o valor de N2: ");
    scanf("%i", &num2);
    som=soma(num1, num2);
    printf("Soma: %i\n", som);
    sub=subtracao(num1, num2);
    printf("Subtração: %i\n", sub);
    rn1=raizquadrada1(num1);
    printf("Raiz quadrada (%i): %.2f\n", num1, rn1);

    printf("Raiz quadrada (2): ");

    printf("Potência (5, 2): ");

    printf("Potência (2, 5): ");
    return 0;
}

int soma(int num1,int num2){
    return num1+num2;
}

int subtracao(int num1, int num2){
    return num1-num2;
}

void raizquadrada1(int num1){
    float num;
    num=sqrt(num1);
    return num;
}
