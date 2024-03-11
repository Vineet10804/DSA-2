#include<stdio.h>
int main()
{
     int a,b;
     printf("Enter two numbers\n");
     scanf("%d",&a);
     scanf("%d",&b);
     int c=a;
     int d=b;
     a=a+b;
     b=a-b;
     a=a-b;
     printf("Numbers before swapping\t%d\t%d\n",c,d);
     printf("Numbers after swapping\t%d\t%d\n",a,b);

}
