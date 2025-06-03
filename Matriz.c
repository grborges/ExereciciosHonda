//Matriz

#include <stdio.h>
#include <time.h>

int main()
{
    int matriz[10000][200];
    clock_t tempo = 0.0;
    long int soma = 0;
    
    printf("Tamanho = %li bytes.\n", sizeof(matriz));
    
    tempo = clock();
    
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 500; j++)
            matriz[i][j] = j;
        
    }    
    
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 500; j++)
           soma += matriz[i][j];
    }
    
    tempo = clock() - tempo;
    
    printf("Somatoria = %li\n", soma);
    printf("Intervalo de %.5f segundos.", (double)tempo / CLOCKS_PER_SEC);
    
    return 0;
}