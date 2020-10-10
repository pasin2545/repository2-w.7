#include <stdio.h>

int main()
{
    int row, col;
    int sum = 0;
    int metrix[100][100];

    scanf_s("%u %u", &row, &col);
    if (row >= 1 && row <= 100 && col >= 1 && col <= 100&& row==col) {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf_s("%d", &metrix[i][j]);
            }
        }
        for (int i = 0; i < row; i++)
        {
            sum = 0;
            for (int j = 0; j < col; j++)
            {
                sum += metrix[i][j];
            }
            printf("Sum of elements of Row %d = %d\n", i + 1, sum);
        }
        for (int i = 0; i < row; i++)
        {
            sum = 0;
            for (int j = 0; j < col; j++)
            {
                sum += metrix[j][i];
            }
            printf("Sum of elements of Column %d = %d\n", i + 1, sum);
        }
    }
    return 0;
}