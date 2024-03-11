#include<stdio.h>
int main()
{
    int n,m,r,c;
    printf("Enter numbers of rows and columns of first matrix\n");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int i,j,k,l;
    printf("Enter array elements of first matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("A=\t");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\t");
    }

    printf("\nEnter number of rows of columns of second matrix\n");
    scanf("%d%d",&r,&c);
    int b[r][c];
    printf("Enter array elements of second matrix\n");
    for(k=0;k<r;k++)
    {
        for(l=0;l<c;l++)
        {
            scanf("%d",&b[k][l]);
        }
    }
    printf("B=\t");
        for(k=0;k<r;k++)
        {
            for(l=0;l<c;l++)
            {
                printf("%d\t",b[k][l]);
            }
           printf("\n\t");
        }

    int s, t, u, v, w, z;
    if (m == r)
        {
        int result[n][c];
        for (u = 0; u < n; u++)
        {
            for (v = 0; v < c; v++)
            {
                result[u][v] = 0;
                for (z = 0; z < m; z++)
                {
                    result[u][v] = result[u][v] + a[u][z] * b[z][v];
                }
            }
        }

        printf("\nResult (A * B) =\n");
        for (s = 0; s < n; s++)
            {
            for (t = 0; t < c; t++)
             {
                printf("%d\t", result[s][t]);
             }
            printf("\n");
        }
    }
    else
        {
           printf("Matrix multiplication is not possible due to incompatible dimensions.\n");
        }

        return 0;
}

