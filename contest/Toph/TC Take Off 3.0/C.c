#include <stdio.h>

int main()
{
    char name[105];
    int ticket = 0;
    scanf("%[^\n]s",name);

    int i = 0;
    while(name[i] != '\0')
    {
        if('A'<= name[i] && 'Z'>= name[i])
        {
            name[i] += 32;
        }

        if('a'<= name[i] && 'z'>= name[i])
        {
            ticket += name[i] - 96;
        }

        i++;
    }

    printf("Ticket ID: %d\n",ticket);

    return 0;
}

