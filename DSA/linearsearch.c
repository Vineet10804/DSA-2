#include<stdio.h>
void search(int,int,int[]);
int main()
{
    int n,sa,i;
    printf("Enter number of elements in an array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter search element:\n");
    scanf("%d",&sa);
    search(n,sa,a);
}
void search(int n,int sa,int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==sa)
        {
            printf("%d is found at position %d\n",sa,i+1);
        }
    }
}
