//Trabalho 1 - Máquina de Café
//Alunos:
//Lincoln Amorim, RGM:41443
//Gabriela Marculino, RGM: 41431
//Leonardo Henrique, RGM:41440
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração e iniciação de variaveis
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int m1 = 0;
    int m2 = 0;
    int m3 = 0;
    int tempo = 0;

    printf("Mostra o melhor andar para pegar seu cafe de maneira rapida e eficaz");
    printf("\nDigite a quantidade de pessoas do primeiro andar: ");
    scanf("%i", &a1);

    printf("\nDigite a quantidade de pessoas do segundo andar: ");
    scanf("%i", &a2);

    printf("\nDigite a quantidade de pessoas do terceiro andar: ");
    scanf("%i", &a3);

    //Tratamento de erro
    if ((a1 < 0) && (a1 > 1000)&& (a2 < 0) && (a2 > 1000) && (a3 < 0) && (a3 > 1000))
    {
        //Em cada andar múltiplica o tempo que demora a ida e volta pela quant. de funcionários
        //depois soma tudo

        m1 = 2 * a2 + 4 * a3;
        m2 = 2 * a1 + 2 * a3;
        m3 = 4 * a1 + 2 * a2;

        //Condicional do tempo
        if ((m1 <= m2) && (m1 <= m3))
        {
            tempo = m1;

        }
        else if (m2 <= m3)
        {
            tempo = m2;
        }
        else
        {
            tempo = m3;
        }

        //Condicional do andar
        if ((m3 == m2) && (m3 < m1))
        {
            printf("\Tempo: %i \n",tempo);
            printf("Maquina localizada no(s) andar(es) 2 ou 3");
        }

        if ((m1  == m2) && (m1 < m3))
        {
            printf("\Tempo: %i \n",tempo);
            printf("Maquina localizada no(s) andar(es) 1 ou 2");
        }

        if ((m3 == m2) && (m1 < m3))
        {
            printf("\Tempo: %i \n",tempo);
            printf("Maquina localizada no(s) andar(es) 1 ou 3");
        }

        if ((m2 <= m3) && (m2 < m1))
        {
            printf("\Tempo: %i \n",tempo);
            printf("Maquina localizada no(s) andar(es) 2");
        }

        if ((m3 == m2) && (m2 == m1))
        {
            printf("\Tempo: %i \n",tempo);
            printf("Maquina localizada no(s) andar(es) 1, 2 ou 3");
        }

        if ((m1 < m2) && (m1 < m3))
        {
            printf("O tempo que voce vai levar para chegar na maquina mais proxima sao %i s localizado no  ",tempo);
            printf("andar 1");
        }
    }
    else
    {
        printf("Numero de pessoas invalidos!");
    }


    return 0;
}
