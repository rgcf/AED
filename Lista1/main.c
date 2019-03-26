#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcoes.h"

int main()
{
    system("clear");

    while (1)
    {

        printf("\n\nInsira a letra correspondente a questao.\nPara limpar a tela digite 1.\nPara sair digite 0.\n");
        fflush(stdin);
        switch (getchar())
        {
        case 'a':
            diasMes();
            break;

        case 'b':
            areaCirculo();
            break;

        case 'c':
            numNegativos();
            break;

        case 'd':
            valorResist();
            break;

        case 'e':
            imprimirTabuada();
            break;
        case 'f':
            mediaNumero();
            break;
        case 'g':
            quadrado();
            break;
        case 'h':
            potNum();
            break;
        case 'i':
            diasMes();
            break;
        case 'j':
            diasMes();
            break;
        case 'k':
            diasMes();
            break;
        case 'l':
            diasMes();
            break;
        case 'm':
            diasMes();
            break;
        case 'n':
            diasMes();
            break;
        case 'o':
            diasMes();
            break;
        case 'p':
            diasMes();
            break;
        case 'q':
            diasMes();
            break;
        case 'r':
            diasMes();
            break;
        case '1':
            system("clear");
            break;
        case '0':
            exit(0);
            break;

        default:
            printf("Valor inválido selecionado, tente novamente");
            break;
        }
    }

    return 0;
}