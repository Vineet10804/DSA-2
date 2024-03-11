#include<stdio.h>
int main()
{
    int n,i;
    while(1)
    {
        printf("Enter the number\n");
        scanf("%d",&n);
        int count=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("The given number is prime\n");
        }
        else
        {
            printf("The given number is not prime\n");
        }


    }

}
