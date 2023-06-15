#include<stdio.h>
#include<stdbool.h>


int main()
{
    int arr[max] = {1,2,3,4,5,6,7};
    int x = 9;
    bool flag = false; // false means Not Found
    int Idx = -1;

    for(int i = 0; i<max-1; i++)
    {
        if(arr[i] == x){
            flag = true; // true means Found
            break;
        }
    }

    if(flag)
        printf("Number found and  Index: %d\n",Idx);
    else
        printf("Number Not There!\n");


    return 0;
}
