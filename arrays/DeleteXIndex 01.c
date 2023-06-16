#include<stdio.h>
#define size 8

int main(){

    int arr[size] = {1,1,2,2,2,4,5,5};
    int s = size;

    for(int i = 0; i<s; i++)
    {
        if(arr[i]%2==0){
            for(int j = i; j<s-1; j++)
            {
                arr[j] = arr[j+1];
            }
            s--;
            i--;
        }
    }


    for(int i =0;i<s;i++)
        printf("%d ",arr[i]);

return 0;

}
