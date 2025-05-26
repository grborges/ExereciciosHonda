/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("\tSoma: %i \n", 45 + 2);
    
    printf("\tSubtração: %i \n", 45 - 2);
    
    printf("\tDivisão: %i \n", 45 / 2);
    
    printf("\tMultiplicação: %i \n", 45 * 2);
    
    printf("\tResto: %i \n", 45 % 2);
    
    printf("\tOrdem das operações sem parênteses: %i \n", 45 * 2 / 3 + 5);
    
    printf("\tOrdem das operações sem parênteses: %i \n", 45 / 3 * 2 + 5);
    
    printf("\tOrdem das operações com parênteses: %i \n", 60 * 2 / (3 + 5));
    
    printf("\tOrdem das operações com parênteses: %i \n", 60 / 3 * (2 + 5));

    
    return 0;
}