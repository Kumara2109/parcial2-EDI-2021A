#include <stdio.h>

int main()
{
    int R, C;
    float suma, prom;

    printf("Dame tu numero de renglones: ", R);
    scanf("%d", &R);

    printf("Dame tu numero de columnas: ", C);
    scanf("%d", &C);

    float matriz [R][C];

    for ( int r = 0; r < R; r++)
    {
        for (int c = 0; c < C; c++)
        {
            printf("Dame el valor de la celda: [%d][%d]", r,c);
            scanf("%f", &matriz[r][c]);

        }
        
    }

    for ( int c = 0; c < C; c++)
    {
        suma = 0;
        for (int r = 0; r < R; r++)
        {
            suma = suma + matriz[r][c];
        }

        prom = suma / R;
        printf("El promedio de la columna %d es: %.2f\n", c+1, prom);
        
    }
    
    



    return 0;
}