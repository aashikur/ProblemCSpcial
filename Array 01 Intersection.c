#include <stdio.h>

int main()
{
    int size1, size2;

    printf("1st Array Size = "); // Getting First Array
        scanf("%d", &size1);

    int array1[size1];
    printf("  Enter 1st Array: ");
    for(int i = 0; i<size1; i++)
        scanf("%d",&array1[i]); // 1st End


    printf("2nd Array Size = "); // Getting 2nd Arry
        scanf("%d", &size2);

    int array2[size2];
    printf("  Enter 2nd Array: ");
    for(int i = 0; i<size2; i++)
        scanf("%d",&array2[i]); // 2nd End


    int x = size1>size2? size1: size2; // Dynamic size (Intersection);
    int array3[x];
    int size3 = 0;

    for(int i=0; i<size1; i++)  // Adding Value to Intersection Arry
    {
        for(int j=0; j<size2; j++)
        {
            if(array1[i]==array2[j])
            {
                array3[size3++] = array1[i];
                break;
            }
        }
    }

    printf("\nIntersection of Arrays: ");
    for(int i = 0; i<size3; i++)
        printf("%d ",array3[i]); // Printing 3rd array

    printf("\n");


    return 0;
}
