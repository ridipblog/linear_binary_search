#include <stdio.h>
#include <stdlib.h>
int linear_search(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
int binary_search(int arr[],int size,int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int size=6;
    int arr[size];
    int element;
    for(int i=0;i<size;i++)
    {
        printf("Enter %d Element ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter Search Element ");
    scanf("%d",&element);
    //int search=linear_search(arr,size,element);
    int search=binary_search(arr,size,element);
    printf("Element Found At %d ",search+1);
    return 0;
}
