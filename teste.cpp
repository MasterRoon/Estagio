#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

void questao1(){

    int INDICE=13;
    int soma=0;
    int k=0;

    while(INDICE>k){
       k=k+1;
       soma=soma+k;
    }
    printf("%d",soma);
    //resposta o valor final é 91.

}

void questao2(){
    int x=0;
    int y=1;
    int guarda;
    int numero;
    printf("Digite o numero desejado:");
    scanf("%d", &numero);
    while(y<numero){
        guarda = y;
        y=x+y;
        x=guarda;
    }
    if(y==numero){
        printf("pertence a sequencia");
    }else{
        printf("Não pertence a sequencia");
    }

}

void questao3(){
    printf("\nA)1, 3, 5, 7, 9 ");
    printf("\nB)2, 4, 8, 16, 32, 64, 128 ");
    printf("\nC)0, 1, 4, 9, 16, 25, 36, 49 ");
    printf("\nD)4, 16, 36, 64, 81 ");
    printf("\nE)1, 1, 2, 3, 5, 8, 13 ");
    printf("\nF)2,10, 12, 16, 17, 18, 19, 200 ");
}

void questao4(){
    printf("Ligo o primeiro interruptor e a deixo funcionando por um período de tempo depois o desligo e ligo o segundo interruptor\n");
    printf("Com isso vou para a sala das lampadas a que estiver quente está ligado ao primeiro interruptor a ascesa ao segundo e a fria ao terceiro");
}

void questao5(){
    char characters[50];
    char invertido[50];
    printf("Digite o que desejar:\n");
    scanf("%s", characters);
    int j =0;
    int i=0;
    for(i=strlen(characters)-1; i>=0;i--) {
        invertido[j] = characters[i];
        j += 1;
    }
    invertido[j] = '\0';
    printf("%s", invertido);
}


int main(){
    int questao=0;

    printf("Qual questão voce deseja a resposta:\n");
    printf("\n//Digite a opcao deseja:");
    printf("\n//(1)valor da variável SOMA");
    printf("\n//(2)sequência de Fibonacci");
    printf("\n//(3)lógica");
    printf("\n//(4)salas das lâmpadas");
    printf("\n//(5)inverte string\n");
    scanf("%d",&questao);

    switch(questao){
        case 1:
            questao1();
            break;
        case 2:
            questao2();
            break;
        case 3:
            questao3();
            break;
        case 4:
            questao4();
            break;
        case 5:
            questao5();
            break;
        default:
            break;
    }

    return 0;
}


