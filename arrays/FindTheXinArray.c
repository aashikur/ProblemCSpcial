#include<stdio.h>
#define max 7
int main()
{
    int arr[max] = {1,2,3,4,5,6,7};
    int target = 8;
    int res = -1;
    // Find 8 // if Yes => index; else -1;

    for(int i = 0; i<max-1; i++)
    {
        if(arr[i] == target){
            res = i;
            break;
        }
    }

    printf("Result is: %d\n",res);


    return 0;
}
