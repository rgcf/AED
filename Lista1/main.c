/*
    Aluno: Ranieri Gomes Couto Filho
    Lista de Exercícios 1 
    Professor: Carlos Jones Rebello Junior
    Disciplina: AED
    Engenharia da Controle e Automação - Ifes campus Linhares
*/

//--------------------------INCLUSÃO DE BIBLIOTECAS---------------------------//
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    system("clear");
    printf("Insira a letra correspondente a questao.\nPara limpar a tela digite 1.\nPara sair digite 0.\n");

    while (1)
    {
        __fpurge(stdin);
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
            numParImpar();
            break;
        case 'j':
            numPosNeg();
            break;
        case 'k':
            numParImparPosNeg();
            break;
        case 'l':
            numPrimo();
            break;
        case 'm':
            maiorNum();
            break;
        case 'n':
            maior3num();
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
        printf("\n\nInsira a letra correspondente a questao.\nPara limpar a tela digite 1.\nPara sair digite 0.\n");
        
    }

    return 0;
}