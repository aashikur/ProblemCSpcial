#include<stdio.h>
#include<stdbool.h>

int isPrime(int x);

int main()  // Prime Number Find
{
    int num;

    while(1)
    {
        scanf("%d",&num);
        if(num==0) break;

        if( num == 1)
            printf("%d is Prime nor Composite\n",num);
        else if(isPrime(num))
            printf("%d is Prime Number\n",num);
        else
            printf("%d is Not Prime Number\n",num);
    }
    return 0;
}


int isPrime(int x)
{
    int cnt = 0;
    for(int i = 1; i<=x; i++)
    {
        if(x%i==0)
            cnt++;
    }

    if(cnt == 2 )
        return 1;
    else
        return 0;

}
