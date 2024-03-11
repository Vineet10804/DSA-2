#include<stdio.h>
int main()
{
    int n,s,z,i;
    int count;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter number of elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&s);
    z=search(s,n,a);
    printf("%d",z);
    
}
int search(int s,int n,int a[])
{
    int count=0,j;
    for(j=0;j<n;j++)
    {
       if(a[j]==s)
       {
        count=count+1;
       } 
    }
    return count;
}