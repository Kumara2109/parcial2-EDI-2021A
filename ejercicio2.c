#include <stdio.h>

int main()
{
    int n;

    printf("Dame el tamaño de la matriz: ", n);
    scanf("%d", &n);

    int matriz [n][n];

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if (r == c)
            {
                matriz [r][c] = 1;
            }
            else
            {
                matriz [r][c] = 0;
            }

            printf("%d", matriz[r][c]);
        }
        
        printf("\n");
    }

    



    return 0;
}
