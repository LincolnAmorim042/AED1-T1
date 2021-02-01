//Trabalho 1 - Azulejos
//Alunos:
//Lincoln Amorim, RGM:41443
//Gabriela Marculino, RGM: 41431
//Leonardo Henrique, RGM:41440

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, A, B, i, pint;

    pint = 0;

    printf("\nDefine quantos azulejos serao pintados com base nos multiplos de A e B");
    printf("\nDefina o total de azulejos: ");
    scanf("%d", &N);
    while((N<3) || (N>10000)) {
            printf("\nErro, N deve atender 3 <= N <= 10000: ");
            scanf("%d", &N);
    }
    printf("\nDefina A: ");
    scanf("%d", &A);
    while(A<2){
            printf("\nErro, A deve atender 2 <= A: ");
            scanf("%d", &A);
    }
    printf("\nDefina B: ");
    scanf("%d", &B);
    while(B>N){
            printf("\nErro, B deve atender B <= N: ");
            scanf("%d", &B);
    }

    for (i=1; i<=N; i++){
            if ((i%A == 0) || (i%B == 0)){
                pint = pint + 1;
            }
    }
    printf("\nSerao pintados %d azulejos", pint);


    return(0);
}
