#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        printf("Enter a number:\n");
        scanf("%d",&n);
        int z=n;
        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("Factorial of number %d is:%d\n",z,fact);
    }
    return 0;
}
