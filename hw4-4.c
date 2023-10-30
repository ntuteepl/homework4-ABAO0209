#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
    {
        int n, i, j, max, max_i, max_j;
        int scores[10][10], boys[10] = {0}, girls[10] = {0};

        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &scores[i][j]);
            }
        }

        for (int k = 0; k < n; k++)
        {
            max = 0;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (!boys[i] && !girls[j] && scores[i][j] > max)
                    {
                        max = scores[i][j];
                        max_i = i;
                        max_j = j;
                    }
                }
            }
            boys[max_i] = 1;
            girls[max_j] = 1;
            printf("boy %d pair with girl %d\n", max_i + 1, max_j + 1);
        }

        return 0;
    }
