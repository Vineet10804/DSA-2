#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter numbers of rows and columns\n");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int i,j;
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
