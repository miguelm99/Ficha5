#include <stdio.h>
#include <stdlib.h>

#define maxhour 23
#define maxmin 59
#define maxsec 59

#define minhour 00
#define minmin 00
#define minsec 00

int hora, min, seg;

int le_num();
void converte_em_segundo();

int main()
{
    le_num();
    converte_em_segundo();
    return 0;
}

int le_num (void){

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
    printf("\n\t|%02i:%02i:%02i|", hora, min, seg);
    printf("\n\t --------", hora, min, seg);

    return hora, min, seg;
}

void converte_em_segundo (){
    int time_in_sec;
    time_in_sec=seg+(min*60)+(hora*60*60);
    printf("\nHora (%02dH:%02dM:%02dS) em segundos =  %d", hora, min, seg, time_in_sec);

}
