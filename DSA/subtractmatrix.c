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
    if(n==r&&m==c)
    {
        int c[n][m];
        int x,y;
        for(x=0;x<n;x++)
        {
            for(y=0;y<m;y++)
            {
                c[x][y]=a[x][y]-b[x][y];
            }
        }
        printf("\nSum of the two array is\n");
        printf("C=\t");
        for(x=0;x<n;x++)
        {
            for(y=0;y<m;y++)
            {
                printf("%d\t",c[x][y]);
            }
            printf("\n\t");
        }
       }
        else
            printf("\nEnter both the matrix of same order\n");


}

