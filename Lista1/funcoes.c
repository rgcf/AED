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
#include <math.h>
#include "funcoes.h"
//----------------------------------------------------------------------------//

//--------------------------INCLUSÃO DAS FUNÇÕES---------------------------//
void continuar()
{
    __fpurge(stdin);
    printf("\n\n\nPressione qualquer tecla para continuar");
    getchar();
}

//Questão a
void diasMes()
{
    int mes;
    printf("\nInsira o numero do mes:");
    scanf("%d", &mes);
    if ((!(mes % 2) && mes < 7) || ((mes % 2) && mes > 7)) //verifica se o mês é par e se ele é antes ou depois do meio do ano
        if (mes == 2)                                      //caso o mês seja par, verifica se é fevereiro
            printf("O mes %d possui : 28 ou 29 dias", mes);
        else
            printf("O mes %d possui : 30 dias", mes);
    else
        printf("O mes %d possui : 31 dias", mes);

    continuar();
    return;
}
//Questão b
void areaCirculo()
{
    const float pi = 3.1415926535;
    float raio;
    printf("\nInsira o valor do raio do circulo");
    scanf("%f", &raio);
    printf("\n\nA area do circudo de raio %f e: %f", raio, (pi * raio * raio));
    continuar();
    return;
}
//Questão c
void numNegativos()
{
    float numeros = 0;
    int i = 1, j = 0;
    printf("\n\nInsira 5 numeros positivos e/ou negativos");
    while (i <= 5)
    { //conta o total de numeros recebidos até o limite de 5
        printf("\n%d numero: ", i);
        scanf("%f", &numeros);
        if (numeros < 0) //conta o total de numeros positivos
            j++;
        i++;
    }
    printf("O total de numeros negativos e: %d", j);
    continuar();
    return;
}
//Questão d
void valorResist()
{
    float r1, r2;
    int sp;
    printf("\nInsira o valor dos resistores:");
    printf("\nResistor 1: ");
    scanf("%f", &r1);
    printf("\nResistor 2: ");
    scanf("%f", &r2);
    printf("\nComo estao ligados os resistores, digite o valor correspondente: ");
    printf("\n1 - Serie; \n2 - Paralelo.");
    scanf("%d", &sp);
    if ((sp - 1))
        printf("A resitencia total e: %f", (r1 + r2)); //calculo de resistencia em série
    else
        printf("A resitencia total e: %f", ((r1 * r2) / (r1 + r2))); //calculo de resistencia em paralelo
    continuar();
    return;
}
//Questão e
void imprimirTabuada()
{
    int num = 0, i = 1;
    printf("\nInsira um numero inteiro: ");
    scanf("%d", &num);
    for (i; i <= 10; i++)
        printf("\n%d * %d = %d", i, num, (i * num));
    continuar();
    return;
}
//Questão f
void mediaNumero()
{
    int i = 0, j;
    float numeros, total = 0;
    printf("\nDigite a quantidade de numeros que serao inseridos: ");
    scanf("%d", &j); //recebe o total de numeros a serem inseridos da pra fazer até a pessoa escolher algum valor para tirar media
    printf("\nInsira os %d valores:\n", j);
    while (i < j)
    {
        scanf("%f", &numeros);
        total += numeros; //soma e armazena os valores recebidos
        i++;
    }
    printf("A media e: %f", (total / j));
    continuar();
    return;
}
//Questão g
void quadrado()
{
    int i;
    printf("\nInsira um numero para calcular o quadrado dele: ");
    scanf("%d", &i);
    printf("\nO quadrado de %d e: %d", i, (i * i));
    continuar();
    return;
}
//Questão h
void potNum()
{
    int num, expo;
    printf("\nInsira o numero: ");
    scanf("%d", &num);
    printf("Insira o valor do expoente: ");
    scanf("%d", &expo);
    //printf("O valor de %d elevado a %d e: %f", num, expo, pow(num,expo));
    continuar();
    return;
}
//Questão i
void numParImpar()
{
    int num;
    printf("\nInsira um numero para verificar se ele e par ou impar: ");
    scanf("%d", &num);
    if (num == 0)
        printf("\nO numero e 0!");
    else if (num % 0)
        printf("\nO valor e par!");
    else
        printf("\nO valor e impar!");
}
//Questão j
void numPosNeg()
{
    int num;
    printf("\nInsira um numero para verificar se ele e positivo ou negativo: ");
    scanf("%d", &num);
    if (num < 0)
        printf("\nO numero e positivo!");
    else if (num == 0)
        printf("\nO valor e 0");
    else
        printf("\nO valor e negativo!");
}
//Questão k
void numParImparPosNeg() //poderia fazer enviando argumentos para as outras duas funções.
{
    int num;
    printf("\nInsira um numero para verificar se ele e positivo ou negativo, impar ou par: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("\nO numero e 0!");
        continuar();
        return;
    }
    else if (num % 0)
        printf("\nO valor e par ");
    else
        printf("\nO valor e impar ");
    if (num < 0)
        printf(" e positivo!");
    else
        printf(" e negativo!");
    continuar();
    return;
}
//Questão l
void numPrimo()
{
    int num, i;
    printf("\nInsira um numero para saber se ele e primo: ");
    scanf("%d", &num);

    for(i = 1; i < num/2; i++)
        if (num % 2) 
            printf("O numero nao e primo.");
    printf("O numero e primo.");

        
    
}
//Questão m
void numPrimomaiorNum()
{
    int numA, numB;
    printf("Insira 2 numeros para saber o maior: \n");
    scanf("%d", &numA);
    scanf("%d", &numB);
    if (numA > numB)
        printf("%d e maior que %d", numA, numB);
    else if (numB > numA)
        printf("%d e maior que %d", numB, numA);
    else
        printf("%d e igual a %d", numA, numB);
    continuar();
    return;
}
//Questão n
void maior3num()
{
    continuar();
    return;
}
//Questão o

//Questão p

//Questão q

//Questão r
