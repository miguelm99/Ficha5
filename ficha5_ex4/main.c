#include <stdio.h>
#include <stdlib.h>

#define maxhour 23
#define maxmin 59
#define maxsec 59

#define minhour 00
#define minmin 00
#define minsec 00

int main()
{
    le_num();
    return 0;
}

int le_num (void){
    int hora, min, seg;
    do{
        printf("Insere a hora: ");
        scanf("%i", &hora);
    }while(hora<minhour || hora>maxhour);
    do{
        printf("Insere a minuto: ");
        scanf("%i", &min);
    }while(min<minmin || min>maxmin);
    do{
        printf("Insere a segundo:");
        scanf("%i", &seg);
    }while(seg<minsec || seg>maxsec);

    printf("\n\t --------", hora, min, seg);
    printf("\n\t|%i:%i:%i|", hora, min, seg);
    printf("\n\t --------", hora, min, seg);
}

int converte_em_segundo (int hora, int minuto, int segundo){

}
