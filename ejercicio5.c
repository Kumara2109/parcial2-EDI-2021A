#include<stdio.h>

int main()
{
    int R,C;
    int sim = 1;

    printf("Dame tu numero de renglones: ", R);
    scanf("%d", &R);

    printf("Dame tu numero de columnas: ", C);
    scanf("%d", &C);  

    int matriz[R][C];

    for(int r = 0; r<R; r++)
    {
        for(int c = 0; c < C; c++ )
        {
            printf("Dame la posicion de  [%d | %d] : ", r,c);
            scanf(" %d",&matriz[r][c]);
        }   
    }
        printf("Elementos almacenados en la matriz: \n\n");

        for(int r = 0; r < R; r++)
        {
            for(int c = 0; c < C; c++)
            {
                printf(" %d ", matriz[r][c]);

                if(matriz[r][c] != matriz[c][r])
                {
                sim = 0;
                }
            }

        printf("\n");

        }
if(sim==1)
    printf("La matriz es simetrica");
else
    printf("La matriz NO es simetrica ");

return 0;
}