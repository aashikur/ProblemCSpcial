#include<stdio.h>
#include<stdbool.h>

int main(){

    int arr[9] = {1,2,3,4,5,6,8,9,10};
    // Find The Missing X between 1 to 10

    int sum=0;
    int OrginalSum = (10*(10+1)) / 2 ;

    for(int i =0 ; i<9; i++)
        sum+= arr[i];

    int MissNum = OrginalSum - sum;

    printf("The Missing Number is: %d\n",MissNum);

    return 0;
}
