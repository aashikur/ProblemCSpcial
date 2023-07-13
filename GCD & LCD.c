// GCD (4,8) = 4
// LCD (4,8) = 8

// GCD (6,8) = 2
// LCD (6,8) = 24


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
    // 2nd Process
    // LCD = (x*y)/gcd(x,y)

        int max = (x>y)? x:y;
        int lcd = max;

    while(lcd <= x*y)
    {
        if(lcd%x == 0 && lcd%y == 0)
            break;
        else
            {
                lcd += max;
                printf("max: %d\n",max);
            }
    }
    return lcd;
};
