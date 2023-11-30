#include <stdio.h>

int main(){

    int o, n, m; //Inicializar variables para el numero de matrices, filas y columnas

    printf("Ingresar el numero de matrices a tratar: ");
    scanf("%d", &o);
    printf("Ingresar el numero de filas de las matrices: ");
    scanf("%d", &n);
    printf("Ingresar el numero de columnas de las matrices: ");
    scanf("%d", &m);

    //El usuario ingresa los datos

    int matriz[n][m][o]; //Inicializacion del arreglo tridimencional

        for (int k = 0; k < o; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                
                if ((o-1)==k)
                {
                    matriz[i][j][k]=1; //Las matrices son inicializadas con ceros a excepcion de la ultima donde esta llena de ceros
                }else{
                    matriz[i][j][k]=0;
                }
                
            }
            
        }
        
    }

        for (int k = 0; k < o; k++)
    {
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("\n");
            for (int j = 0; j < m; j++)
            {
                printf("%d ", matriz[i][j][k]); //Finalmente se imprimen las matrices y sus filas y columnas que haya el usuario pedido
            }
            
        }
        
    }


    return 0;
}