#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        printf("Average of how many numbers to be calculated:\n");
        scanf("%d",&n);
        float a[n];
        int i;
        printf("Enter %d numbers:\n",n);
        float result=0;
        for(i=0;i<n;i++)
        {
            scanf("%f",&a[i]);
            result=result+a[i];
        }
        result=result/n;
        printf("The average of three numbers is:%f\n",result);
    }

}
