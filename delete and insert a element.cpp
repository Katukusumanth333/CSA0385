#include<stdio.h>
int main()
{
    int a[10],n,i,pos,ele;
    printf("enter the size of elements");
    scanf("%d",&n);
    printf("enter the elemebnts in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position to delete ");
    scanf("%d",&pos);
    printf("enter the element to insert");
    scanf("%d",&ele);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
        a[pos]=ele;
    }
    n++;
    printf("array after deleting");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
