#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int j;
inicio:
int ocupado[20];
if(ocupado[19]!=0){
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
for(C=0;C<=1;C++){
    for(L=0;L<=9;L++){

    printf(" %d ",lugares[C][L]);
    }
}

printf("\nescolha um lugar:");
scanf("%d", &aux);
if(aux<=0 || aux>=21){
    printf("\nlugar invalido!");
    goto inicio;
}

for(j=0;j<=19;j++){
    if(aux == ocupado[j]){
        printf("\nerror esse lugar esta ocupado!\n");
        goto inicio;
    }else{
        ocupado[j]=aux;
        goto erro;
    }  
}
erro:
char letra;

printf("\ndeseja comprar mais? S/N:");
scanf("%s", &letra);
if(letra =='n' || letra == 'N'){
    printf("\nobrigado pela preferencia tenha um bom dia!\n"); 
    goto inicio;   
}else if(letra =='s' || letra == 'S'){
    printf("\ncerto!\n");
    goto inicio;
}else{
    printf("\ncaractere invalido!\n");
    goto inicio;
}
}
