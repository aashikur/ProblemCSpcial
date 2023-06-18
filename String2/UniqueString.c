#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main()
{
    // Input: assshhhiikk
    // Output: ashik

    int i,SourceLenth,UniqLenth;
    char Source[100];
    bool isUnique;
    scanf("%[^\n]s",Source);

    char UniqueStr[100];
    UniqLenth = 0;

    i = 0;
    while(scr[i] != '\0')
        i++;

    SourceLenth = i;

    for( i = 0 ; i<SourceLenth; i++)
    {
        isUnique = true;
        for(int j =0; j<UniqLenth; j++)
        {
            if( Source[i] == UniqueStr[j] )
            {
                isUnique = false;
                break;
            }
        }

        if(isUnique == true)
        {
            UniqueStr[UniqLenth] = Source[i];
            UniqLenth++;
        }
    }

    UniqueStr[UniqLenth] = '\0';
    puts(UniqueStr);

    return 0;
}
