#include<stdio.h>
#include<stdbool.h>

int main()
{
    int arr[8] = {1,1,2,2,4,5,5,8};
    bool isUnique;

    for(int i = 0; i<8;i++)
    {
        isUnique = true;

        for(int j = 0; j<8; j++)
        {
            if(arr[j] == arr[i] && j != i)
            {
                isUnique = false;
                break;
            }
        }

        if(isUnique)
        {
            printf("Unique is: %d\n",arr[i]);
        }
    }

    return 0;
}

