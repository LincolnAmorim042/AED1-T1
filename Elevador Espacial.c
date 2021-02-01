//Trabalho 1 - Elevador Espacial
//Alunos:
//Lincoln Amorim, RGM:41443
//Gabriela Marculino, RGM: 41431
//Leonardo Henrique, RGM:41440
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaração e inicializção de variáveis
    //São 7 números, pois o exercício só aceita 10^6

    int num = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int num6 = 0;
    int num7 = 0;
    int cont = 0;
    int and = 0; //Variável de controle do Do/While

    printf("*** Trabalho 1 - Exer. Elevador Espacial ***\n\n");
    printf("Digite o andar que voce deseja ir :\n");
    scanf("%d",&num);

    if ((num > 0) && (num < 100000)){


   do{ //Começo

    //Separação dos algarismos à partir de DIV e MOD
    and += 1;
    cont += 1;

    num7 = (cont % 10);
    num6 = ((cont / 10) % 10);
    num5 = ((cont / 100) % 10);
    num4 = ((cont / 1000) % 10);
    num3 = ((cont / 10000) % 10);
    num2 = ((cont / 100000) % 10);
    num1 = ((cont / 1000000) % 10);

        //Verificação do número 13
        if ((num1 == 1) && (num2 == 3)){
            cont += 100000;
        }
        if ((num2 == 1) && (num3 == 3)){
            cont += 10000;
        }
        if ((num3 == 1) && (num4 == 3)){
            cont += + 1000;
        }
        if ((num4 == 1) && (num5 == 3)){
            cont += + 100;
        }
        if ((num5 == 1) && (num6 == 3)){
            cont += + 10;
        }
        if ((num6 == 1) && (num7 == 3)){
            cont += + 1;
        }

    //Separação dos algarismos à partir de DIV e MOD
    num7 = (cont % 10);
    num6 = ((cont / 10) % 10);
    num5 = ((cont / 100) % 10);
    num4 = ((cont / 1000) % 10);
    num3 = ((cont / 10000) % 10);
    num2 = ((cont / 100000) % 10);
    num1 = ((cont / 1000000) % 10);

        //Verificação do número 4
        if (num7 == 4){
            cont += 1;
        }
        if (num6 == 4){
           cont += 10;
        }
        if (num5 == 4){
            cont += 100;
        }
        if (num4 == 4){
            cont += 1000;
        }
        if (num3 == 4){
            cont += 1000;
        }
        if (num2 == 4){
            cont += 100000;
        }
        if (num1 == 4){
            cont += 1000000;
        }

   }while(and < num); //Fim

    printf("O seu andar eh: %d \n",cont);
}
else
    {
    printf("Andar invalido. Tente novamente\n");
    }
    system("pause");

    return 0;
}
