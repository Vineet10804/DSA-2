#include<stdio.h>
int main()
{
    int n,k,l;
    int a[n];
    printf("enter number of array elements\n");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",a[k]);
    }
    for(l=0;l<n;l++)
    {
        printf("%d",a[l]);
    }
}