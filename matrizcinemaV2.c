#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int aux2=0;
int ocupado[20];
ocupado[20]=0;
inicio:
if(ocupado[20]!=0){
    printf("desculpe mas todos os lugares ja foram comprados!");
    return 0;
}
int lugares[2][10];
lugares[0][0]=1;
lugares[0][1]=2;
lugares[0][2]=3;
lugares[0][3]=4;
lugares[0][4]=5;
lugares[0][5]=6;
lugares[0][6]=7;
lugares[0][7]=8;
lugares[0][8]=9;
lugares[0][9]=10;
lugares[1][0]=11;
lugares[1][1]=12;
lugares[1][2]=13;
lugares[1][3]=14;
lugares[1][4]=15;
lugares[1][5]=16;
lugares[1][6]=17;
lugares[1][7]=18;
lugares[1][8]=19;
lugares[1][9]=20;

int C=0, L, aux;
do{
    for(L=0;L<=9;L++){

    printf("%d      ",lugares[C][L]);
    }
C++;
}while (C<=1);
printf("\nescolha um lugar:");
scanf("%d", &aux);
if(aux<=0 || aux>=21){
    printf("\nlugar invalido!");
    goto inicio;
}
printf("\nobrigado pela preferencia tenha um bom dia!");
printf("\n\n");
aux2++;
ocupado[aux2]=aux;
goto inicio;

}