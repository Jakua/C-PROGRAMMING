#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        //printf("%d ",a[i]);
        if(a[i]>0)
        {
            a[i]=a[i]/a[i];
            printf("%d ",a[i]);
        }
        else
        {
            a[i]=a[i]*-1;
            printf("%d ",a[i]);
        }
    }
    return 0;
}