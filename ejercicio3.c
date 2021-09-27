#include <stdio.h>

int main ()
{
    int R1, C1;

    printf("Dame el numero de renglones de la matriz original: \n");
    scanf("%d", &R1);
    printf("Dame el numero de columnas de la matriz original: \n");
    scanf("%d", &C1);

    int M_original [R1][C1];
    int M_Traspuesta [C1][R1];


    for ( int r1 = 0; r1 < R1; r1++)
    {
        for (int c1 = 0; c1 < C1; c1++)
        {
            printf("Dame el valor de la posicion [%d][%d] de la matriz original: \n", r1,c1);
            scanf("%d", &M_original[r1][c1]); 
            printf("\n");
    
        }
        
        printf("\n");
    }

    

    printf("Matriz Traspuesta: \n");

    for (int r2 = 0; r2 < C1; r2++)
    {
        for (int c2 = 0; c2 < R1; c2++)
        {
            M_Traspuesta[r2][c2] = M_original[c2][r2];
            printf("%d", M_Traspuesta[r2][c2]);
        }

        printf("\n");
    }
    


    




    return 0;
}