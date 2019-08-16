//Trabalho 1 - Folha de Pagamentos
//Alunos:
//Lincoln Amorim, RGM:41443
//Gabriela Marculino, RGM: 41431
//Leonardo Henrique, RGM:41440

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, ii, i;

    int soma = 0;

    printf("Calculo do salario dos funcionarios\n");
    printf("Entre com o numero de funcionarios: ");
    scanf("%d", &m);

    while((m<1) || (m>10000)){
            printf("\nERRO, Por favor entre com um valor que atenda a exigencia  1 <= N <= 10^4 \n");
            printf("\nEntre com o numero de funcionarios: ");
            scanf("%d", &m);
    }


    for(ii=1 ; ii<=m ; ii++){

        printf("\nEntre com o numero de matricula do funcionario: ");
        scanf("%d", &n);

        while((n<1) || (n>30000)){
                printf("\nERRO, Por favor digite um valor que atenda a exigencia 1 <= N <= 3*10^4 \n");
                printf("\nEntre com o numero de matricula do funcionario: ");
                scanf("%d", &n);
        }

        for(i=1 ; i<=n ; i++){

            if(n % i == 0){
                soma = soma + i;
            }
        }

        printf("O salario e: %d \n",soma);
        soma = 0;
    }

    return 0;
}
