#include<stdio.h>
int main()
{
    int n,max=-100001,min=100001,max_i=0,min_i=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
        {
            max=arr[i];
            max_i=i;
        }
        if(min>arr[i])
        {
            min=arr[i];
            min_i=i;
        }
    }
    int tem;
    tem=arr[max_i];
    arr[max_i]=arr[min_i];
    arr[min_i]=tem;

    for(int i=0; i<n; i++) printf("%d ",arr[i]);
    printf("\n");
}