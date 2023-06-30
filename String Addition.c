#include <stdio.h>
#include <math.h>
#include <string.h>

int main() // Enter a Number: it will tells N'th Fibonacci Number;
{
    int t,c,s,cnt,i;
    char num1[10000];
    char num2[10000];
    char  sum[20000];
    char n1[5] = "0";
    char n2[5] = "1";

    while( scanf("%d",&cnt) != EOF)
    {
        strcpy(num1,n1);
        strcpy(num2,n2);
        strcpy(sum,n1);

        printf("The  Fibonacci  number  for  %d  is ",cnt);


        if(cnt == 0 )
            printf("0\n");
        else if(cnt == 1 )
            printf("1\n");

        else
        {
            while(cnt !=1)
            {
                TheStrSum(num1,num2,sum);
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
}

void  FixNum(char num1[20000],char num2[20000])
{
    int l1 = strlen(num1);
    int l2 = strlen(num2);
    int len = (l1>l2)? l1:l2;
        len = len + len/4;
    int i;

    for(i = l1; i<=len; i++)
    {
        num1[i] = '0';
    }
    for(i = l2; i<=len; i++)
    {
        num2[i] = '0';
    }
}
void  FixSum(char sum[20000])
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
void TheStrSum(char num1[20000], char num2[20000],char sum[20000])
{
    reverseStr(num1);
    reverseStr(num2);
    FixNum(num1,num2);

    int t,c,s,cnt,i;
    c = 0;
    for(i = 0; i<strlen(num1); i++)
    {
        t = (num1[i] + num2[i] - 96) + c;
        s = t%10;
        c = (t-c)/10;
        sum[i] = s + 48;
    }
    reverseStr(sum);
    FixSum(sum);
    reverseStr(num1);
    FixSum(num1);
    reverseStr(num2);
    FixSum(num2);
}

