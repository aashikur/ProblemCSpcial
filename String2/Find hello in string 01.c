#include<stdio.h>

int main() // Time Complexity O(N)
{
    char stringInput[10005]; // N:B: always Follow the Consists
    scanf("%[^\n]s",stringInput);

    char target[] = "hello";
    int targetLenth = 5;
    int targetIndex = 0;
    int stringLenth = 0;

    while(stringInput[stringLenth] != '\0')
        stringLenth++;

    for(int i = 0; i<stringLenth; i++)
    {
        if(stringInput[i] == target[targetIndex])
        {
            targetIndex++;
            if(targetIndex==targetLenth)
            {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
  
    return 0;
}
