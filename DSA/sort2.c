#include<stdio.h>
int main()
{
    int z,i,j,k,temp,n;
    int a[5]={10,7,4,67,77};
    //printf("Enter number of array elements\n");
    //scanf("%d",&n);
    //printf("Enter array elements\n");
    //for(k=0;k<n;k++)
    //{
      //  scanf("%d",&a[k]);
    //}
    for(j=0;j<5;j++)
    {
        for(i=0;i<4;i++)
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
    for(z=0;z<5;z++)
    {
        printf("%d\n",a[z]);
    }
}
