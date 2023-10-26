#include <stdio.h>

int main()
{
    int linhas, colunas;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int Matriz1[linhas][colunas];
    int MatrizTransposta[colunas][linhas]; 

    printf("Preencha a matriz.\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o número [%d,%d]: ", i + 1, j + 1);
            scanf("%d", &Matriz1[i][j]);
        }
    }

    printf("\nA matriz é:\n");
    for (int i = 0; i < linhas; i++) {
        printf("| ");
        for (int j = 0; j < colunas; j++) {
            printf("%d | ", Matriz1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            MatrizTransposta[j][i] = Matriz1[i][j]; 
        }
    }

    printf("A matriz transposta é:\n");
    for (int i = 0; i < colunas; i++) { 
        printf("| ");
        for (int j = 0; j < linhas; j++) { 
            printf("%d | ", MatrizTransposta[i][j]);
        }
        printf("\n");
    }

    return 0; 
}