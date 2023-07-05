#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    int t,c,s,cnt,i;

    while( scanf("%d",&cnt) != EOF)
    {
        char num1[10000]="0";
        num1[1]='\0';
        char num2[10000]="1";
        num1[1]='\0';
        char  sum[20000]="1";
        sum[0]='\0';

        printf("The  Fibonacci  number  for  %d  is ",cnt);

        if(cnt == 0 )
            printf("0\n");
        else if(cnt == 1 )
            printf("1\n");

        else
        {
            while(cnt !=1)
            {
                theStrSum(num1,num2,sum);
                strcpy(num1,num2);
                strcpy(num2,sum);
                cnt--;
            }

            puts(sum);
        }

    }

    return 0;
}






void reverseStr(char str[20000])
{
    int i,j;
    char t;
    for(i = 0,j = strlen(str)-1; i<=j; i++,j--)
    {
        t = str[i];
        str[i] = str[j];
        str[j] = t;
    }
    str[strlen(str)]='\0';
}

void  fixNum(char num1[20000],char num2[20000])
{
    int l1 = strlen(num1);
    int l2 = strlen(num2);
    int len = (l1>l2)? l1:l2;

    int i;

    for(i = l1; i<=len; i++)
    {
        num1[i] = '0';
    }
    num1[i] = '\0';

    for(i = l2; i<=len; i++)
    {
        num2[i] = '0';
    }
    num2[i] = '\0';
}


void  fixSum(char sum[20000])
{
    int i=0,j;
    while(sum[i] == '0')
        i++;
    int len = strlen(sum);
    char t;

    if(i != 0)
    {

        for(j = 0; j<len-i; j++)
        {
            t = sum[i];
            sum[j] = sum[j+i];
            sum[j+i] = t;
        }
        sum[len-i] = '\0';
    }
};


void theStrSum(char num1[20000], char num2[20000],char sum[20000])
{
    reverseStr(num1);
    reverseStr(num2);
    fixNum(num1,num2);

    int t,c,s,cnt,i;
    c = 0;
    for(i = 0; i<strlen(num1); i++)
    {
        t = (num1[i] + num2[i] - 96) + c;
        s = t%10;
        c = t/10;
        sum[i] = s + 48;
    }
    reverseStr(sum);
    fixSum(sum);
    reverseStr(num1);
    fixSum(num1);
    reverseStr(num2);
    fixSum(num2);
}
