#include<stdio.h>
// Number of Index "fix" will be locked! other will change!
int main()
{
    int size,fix,strt,End,i,j,temp;

    printf("Enter Array Size: ");
    scanf("%d",&size);

    int arr[size];
    for( i=0; i<size; i++)
        scanf("%d",&arr[i]);

    printf("Front Fixed Value: ");
    scanf("%d",&fix);

    strt = fix;
    End = size-1;

    for( i = strt,j=End; i<=j; i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Front Fixed Reversed Array:\n");

    for( i=0; i<size; i++)
        printf("%d ",arr[i]);

    return 0;

}
