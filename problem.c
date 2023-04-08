#include <stdio.h>
#include<math.h>

int main()
{
    unsigned long long int a,b,temp, sum = 0;
    unsigned long long int LastNum,r, condition;
    scanf("%llu %llu",&a,&b);


    for(unsigned long long int i = a; i<= b; i++)
    {
        temp = i;
        while(temp)
        {
            r = temp % 10;
            temp/=10;
            if(r % 4 == 0)
            {
                condition = 0;
                break;
            }
            else
            {
                condition = 1;
            }
        }
        if(condition)
            sum += i;
    }
    printf("%llu\n", sum);

    return 0;
}
