#include<stdio.h>
#include<stdbool.h>

    int main(){

    int arr[7] = {3, 1, 3, 6, 2, 4, 4};

    for(int i = 0; i<7; i++)
    {
        bool unique = true;
        for(int j = 0; j<7; j++)
        {
            if(arr[i] == arr[j] && i !=j )
            {
                unique = false;
                break;
            }
        }

        if(unique){
            printf("1st Unique is: %d\n",arr[i]);
            break;
        }
    }



    return 0;
}
