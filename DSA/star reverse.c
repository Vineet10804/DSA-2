#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

