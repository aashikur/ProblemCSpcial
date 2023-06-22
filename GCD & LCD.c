#include<stdio.h>

int gcd(int x, int y);
int  lcd(int x,int y);

int main()   // LCD && GCD
{

    int a,b;
    printf("Enter two Integer: ");
    scanf("%d %d",&a,&b);

    int x = gcd(a,b);
    int y = lcd(a,b);

    printf("The GCD : %d\n",x);
    printf("The LCD : %d\n",y);

    return 0;

}


int  gcd(int x,int y)
{
    int min = (x<y)? x:y;

    while(1)
    {
        if(x %min == 0 && y%min == 0)
        {
            break;
        }
        else
        {
            min--;
        }
    }
    return min;
};

int  lcd(int x,int y)
{
    return (x*y)/gcd(x,y);
};
