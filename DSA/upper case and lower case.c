#include<stdio.h>
int main()
{
    int i;
    for(i=65;i<90;i++)
    {
        char c=i;
        printf("%c",c);
        char d=i+32;
        printf("%c\n",d);
    }
}
