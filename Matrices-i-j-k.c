#include <stdio.h>

int main(){

    int n, m, o;

    printf("Ingresar el numero de matrices a tratar: ");
    scanf("%d", &o);
    printf("Ingresar el numero de filas de las matrices: ");
    scanf("%d", &n);
    printf("Ingresar el numero de columnas de las matrices");
    scanf("%d", &m);

    int matriz[n][m][o];


    return 0;
}