#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
inicio:
erro:
int ocupado[3][10];
int lugar[3][10];
int c=0, n, l;


lugar[0][0]=1;
lugar[0][1]=2;
lugar[0][2]=3;
lugar[0][3]=4;
lugar[0][4]=5;
lugar[0][5]=6;
lugar[0][6]=7;
lugar[0][7]=8;
lugar[0][8]=9;
lugar[0][9]=10;
lugar[1][0]=11;
lugar[1][1]=12;
lugar[1][2]=13;
lugar[1][3]=14;
lugar[1][4]=15;
lugar[1][5]=16;
lugar[1][6]=17;
lugar[1][7]=18;
lugar[1][8]=19;
lugar[1][9]=20;
lugar[2][0]=21;
lugar[2][1]=22;
lugar[2][2]=23;
lugar[2][3]=24;
lugar[2][4]=25;
lugar[2][5]=26;
lugar[2][6]=27;
lugar[2][7]=28;
lugar[2][8]=29;
lugar[2][9]=30;


do{
    for(l=0;l<=9;l++){
        printf("%d    ", lugar[c][l]);
    }
    c++;
}while(c<=2);
    printf("\nescolha uma dessas cadeiras:");
    scanf("%d", &n);
if(n<=0 || n>=30){
    printf("assento invalido!\n");
    printf("------------------------\n");
    goto erro;

}else{
//hr dos lugares ficarem ocupados

int m, b=0;
//m=linha b=coluna
do{
for(m=0;m<=9;m++){
    if(n == ocupado[b][m]){
        printf("\nerror esse lugar esta ocupado!\n");
        printf("------------------------\n");
        goto erro;
    
    }
    else{
        ocupado[b][m] = n;
        goto done;
    }
}
b++;
}while(b<=2);

done:
printf("\nobrigado pela preferencia!\n");
printf("------------------------\n");

goto inicio;

return 0;
}
}