/*
Questao 13

Ponteiro é uma forma de "apontar" para uma função, ou seja,
é possivel referenciar o endereço de uma função para assim
acessar suas instruções.

*/
#include <stdio.h>

int soma(int a, int b){return a+b;}
int mult(int a, int b){return a*b;}

int (*pfunc)(int,int);


int main()
{
    pfunc=soma;
    printf("%d\n", pfunc(2,3));
    pfunc=mult;
    printf("%d\n", pfunc(2,3));

}
