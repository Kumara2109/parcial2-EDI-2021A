#include <stdio.h>
#define m 100
#define n 100
int main()
{
    int A[m][n];
    int i,j,filas,columnas,mayor,c,r;
    float suma=0;
    float promedio;
    printf("Escribe el numero de filas");
    scanf("%d", &filas);
    printf("Escribe el numero de columnas");
    scanf("%d", &columnas);
    
    for(i=0;i<filas;i++)
    {
        for(j=0;j<columnas; j++)
        {
            printf("Ingresa el valor de [%d][%d]:", i, j);
            scanf("%d", &A[i][j]);
            
        }
    }
    
    mayor=A[0][0];
     for(i=0;i<filas;i++)
    {
        for(j=0;j<columnas; j++)
        {
            if(mayor<A[i][j])
            {
                mayor=A[i][j];
                c=j;
                r=i;
            }
        }
    }
    printf("El numero mayor es %d [%d][%d]",mayor,r,c);
    
    
    return 0;
}