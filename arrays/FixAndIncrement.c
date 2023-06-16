#include<stdio.h>

int main()
{
    int arr[7] = {9,4,5,6,1,2,3};
    int fix = 3; // Number of Index "fix" will be locked! other will change!

    int run = 7;

    while(run--)
    {
        for(int i = 0; i<7-1; i++)
        {
            if(i == fix-1)
            {
                int temp = arr[i];
                arr[i]   = arr[i+2];
                arr[i+2] = temp;
            }
            else if(i == fix)
                continue;
            else if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]   = arr[i+1];
                arr[i+1] = temp;
            }

        }
    }



    for(int i=0; i<7; i++)
        printf("%5d",arr[i]);





    return 0;

}
