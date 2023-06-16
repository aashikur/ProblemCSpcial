#include<stdio.h>
#include<stdbool.h>

int main()
{
    int arr[7]={4,2,3,4,5,6,5};
    int x,Xcount;
    bool isThereX;

    printf("What Number U want to Find?\n");
    scanf("%d",&x);

    isThereX = false;
    Xcount = 0;

    for(int i = 0;i<7;i++)
    {
        if(arr[i] == x)
        {
            isThereX = true;
            Xcount++;

        }
    }

    if(isThereX)
        printf("%d found %d times\n",x,Xcount);
    else
        printf("%d not found!\n");


    return 0;
}
