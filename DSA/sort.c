#include<stdio.h>
int main()
{
    int z,i,j,k,temp,n;
    printf("Enter number of array elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for(z=0;z<n;z++)
    {
        printf("%d\n",a[z]);
    }
}
