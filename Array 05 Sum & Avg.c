#include <stdio.h>

int main()
{
    int size, sum=0,Tnum = 0;;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    printf("Enter the elements of the array: ");
    int array[size];
    for(int i = 0; i<size; i++)
    {
        scanf("%d", &array[i]);
        sum+= array[i];
        Tnum++;
    }

    int avg = Tnum==0? 0: sum/Tnum;

    printf("\nSum: %d\n",sum);
    printf("Average: %d\n",avg);



    return 0;
}
