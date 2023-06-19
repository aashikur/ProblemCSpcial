#include<stdio.h>
#include<stdbool.h>

int main(){

    char stringInput[10005]; // Follow the Consists !Important
    scanf("%[^\n]s",stringInput);

    char target[] = "hello";
    int targetLength = 5;

    int stringCheckIndex = 0;
    int stringLength = 0;
    while(stringInput[stringLength]!='\0')
        stringLength++;

    bool isTrue;
    for(int i = 0; i<targetLength; i++)
    {
        isTrue = false;
        for(int j = stringCheckIndex; j<stringLength; j++)
        {
            if(target[i] == stringInput[j] )
            {
                isTrue = true;
                stringCheckIndex = j + 1;
                break;
            }
        }
        if(isTrue == false) break; // IF this line off: helo/ho will give "YES"
    }

    if(isTrue)
        printf("YES\n");
    else
        printf("NO\n");

return 0;
}
