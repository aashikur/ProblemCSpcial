#include<stdio.h>
#define max 7
int main()
{
    int arr[max] = {1,2,3,4,5,6,7};
    int st,end;
    int rotate = 3;

    st = 0;
    end = max -1;
    for(int i = st,j= end; i<=j ; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    st = 0;
    end = rotate-1;
    for(int i = st,j= end; i<=j ; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    st = rotate;
    end = max-1;
    for(int i = st,j= end; i<=j ; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }



    for(int i = 0; i<max; i++)
        printf("%d ",arr[i]);



    return 0;
}
