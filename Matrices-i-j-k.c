#include <stdio.h>

int main(){

    int n, m, o;

    printf("Ingresar el numero de matrices a tratar: ");
    scanf("%d", &o);
    printf("Ingresar el numero de filas de las matrices: ");
    scanf("%d", &n);
    printf("Ingresar el numero de columnas de las matrices: ");
    scanf("%d", &m);

    int matriz[n][m][o];

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < o; k++)
            {
                matriz[i][j][k]=0;
            }
            
        }
        
    }

        for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("\n");
            for (int k = 0; k < o; k++)
            {
                printf("%d ", matriz[i][j][k]);
            }
            
        }
        
    }

    


    return 0;
}