#include <stdio.h>

int main()
{

    int size,position;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    printf("Enter the Element of array: ");
    int array[size];
    for(int i = 0; i<size; i++)
        scanf("%d",&array[i]);

    printf("Enter the position to rotate: ");
    scanf("%d",&position);

    int rotateArray[size];
    printf("The rotated array is: ");
    for(int i = 0; i<size; i++)
    {
        if(i<position)
            rotateArray[i] = array[size-position+i];
        else
            rotateArray[i] = array[i-position];

        printf("%d ",rotateArray[i]);
    }



    return 0;
}
