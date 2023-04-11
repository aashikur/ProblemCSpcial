#include<stdio.h>
#include<math.h>
int main()
{
    int day;
    double  MoneyRifat = 0,  MoneyAshik = 0, sum = .01;
                                        // Start 0.01 TK
    printf("Enter The Days Argument: \n", day);
    printf("Day: ", day);
    scanf("%d",&day);
    for(int i = 1; i<=day; i++)
    {
        MoneyAshik+=200000;
        MoneyRifat+= sum;
        sum*=2;
    }
    printf("\nMoneyAshik: %.2lf\n",MoneyAshik);
    printf("MoneyRifat: %.2lf\n\n",MoneyRifat);

    if(MoneyAshik>MoneyRifat)
        printf("Ashik Win: %.2lf\n", MoneyAshik-MoneyRifat);
    else
        printf("Rifat Win: %.2lf\n", MoneyRifat- MoneyAshik);

    return 0;
}
