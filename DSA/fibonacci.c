#include<stdio.h>
void main()
{
    int n,i,sum;
    while(1)
    {
        printf("Enter the range:\n");
        scanf("%d",&n);
        int a=0;
        int b=1;
        printf("%d\t%d\t",a,b);
        for(i=0;i<n-2;i++)
            {

                sum=fib(a,b);
                a=b;
                b=sum;
            }
        printf("\n");
     }

}
int fib(int a,int b)
{
    int sum;
    sum=a+b;
    printf("%d\t",sum);
    return sum;
}
