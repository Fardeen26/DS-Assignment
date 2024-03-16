#include <stdio.h>
#include <string.h>
int main()
{
    int mat1[3][3];
    printf("Enter mat1 elements: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat1[i][j]);
    }

    int mat2[3][3];
    printf("Enter mat2 elements: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat2[i][j]);
    }

    int ans[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            ans[i][j] = 0;

    for (int i = 0; i < 3; i++)
        for (int j = i; j <= i; j++)
            ans[i][j] = mat1[i][j] + mat2[i][j];

    for (int i = 0; i < 3; i++)
    {
        ans[i][3 - 1 - i] = mat1[i][3 - 1 - i] + mat2[3 - 1 - i][i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", ans[i][j]);
        printf("\n");
    }

    return 0;
}