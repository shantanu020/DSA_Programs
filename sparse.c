#include <stdio.h>
int main()
{
    int sparse[50][50], triplet[50][3], m, n, count = 0, temp = 1;

    printf("Enter number of rows and columns:\n");
    scanf("%d%d", &m, &n);
    printf("Enter elements of sparse matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &sparse[i][j]);
            if (sparse[i][j] != 0) // condition for counting non zero elements
            {
                count++;
            }
        }
    }
    triplet[0][0] = m;     // no of rows of sparse matrix
    triplet[0][1] = n;     // no of columns of sparse matrix
    triplet[0][2] = count; // no.of non zero elements of sparse matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sparse[i][j] != 0)
            {                                    // this condition will filter out non zero elements
                triplet[temp][0] = i;            // row *index* of non zero element
                triplet[temp][1] = j;            // col *index* of non zero element
                triplet[temp][2] = sparse[i][j]; // non zero element
                temp++;                          // row increment
            }
        }
    }
    printf("triplet :\n");
    for (int i = 0; i < count + 1; i++)
    { // total number of rows in triplet matrix will be number of non zero element +1;
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", triplet[i][j]);
        }
        printf("\n");
    }
    return 0;
}