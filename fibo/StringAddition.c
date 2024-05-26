#include <stdio.h>
#include <math.h>
#include <string.h>
void strAddition(char num1[20000], char num2[20000],char sum[20000]);
// ======================================================
// How it's Work => Sum method
// 1. Reverse the Number    : 1234 => 4321
// 2. Adjust Number Length  : 33   => 3300
// 3. Add extra 0 For Carry : 4321 => 43210 ; 33 => 33000
// 4. Sum with Trick!       : 76210
// 5. Then Reverse The Sum  : 01267 ;
// 6. Remove FrontZero :    :  1267 ; Done!


// 1234 |-> 4321   |==> 43210
// + 33 |->   33 =>|==> 33000
//===== |          |---------
// 1267 |          |    76210  ==> 01267 ==> 1267 Done!
// ======================================================

int main() {

    char num1[20000] = "0";
    char num2[20000] = "0";
    char sum[20000]  = "0";
    
    scanf("%[^\n]s",num1);
    getchar();
    scanf("%[^\n]s",num2);
    
    strAddition(num1,num2,sum);
    
    printf("----------------------------------------\n");
    printf("%s\n",sum);


return 0;
}


//----------------------------------------------------------------
//// Step 1. Reverse string
//----------------------------------------------------------------
void strReverse(char str[20000]) {
    int i,j;
    char tem;
    int end = strlen(str);

    for(i = 0,j = end-1; i<=j; i++,j--) {
        tem = str[i];
        str[i] = str[j];
        str[j] = tem;
    }
    str[end]='\0';
}


//----------------------------------------------------------------
// Step 2. Adjust Additional Length
//----------------------------------------------------------------
void  adjectNumRightZero(char num1[20000],char num2[20000]) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len = (len1>len2)? len1:len2;
    int i;
    // 2211     => 22110
    // 22       => 22000

    for(i = len1; i<=len; i++) { // 2211 => 22110
        num1[i] = '0';
    }
    num1[i] = '\0';

    for(i = len2; i<=len; i++) { // 22 => 22000
        num2[i] = '0';
    }
    num2[i] = '\0';
}

//----------------------------------------------------------------
// Step 6. Remove Zero if There is Zero in front ( Prebuild )
//----------------------------------------------------------------
void  FirstZeroRemove(char str[20000]) {
    int isFirstZero=0;
    while(str[isFirstZero] == '0')
        isFirstZero++;

    int len = strlen(str);
    char tem;

    int i;
    if(isFirstZero) {

        for(i = 0; i<len-isFirstZero; i++) { // 002233 => 2233
            tem                = str[isFirstZero];
            str[i]             = str[i+isFirstZero];
            str[i+isFirstZero] = tem;
        }
        str[len-isFirstZero] = '\0';
    }
}


//----------------------------------------------------------------
// Step 4. Sum of String
//----------------------------------------------------------------
void strAddition(char num1[20000], char num2[20000],char sum[20000]) {
    strReverse(num1);
    strReverse(num2);
    adjectNumRightZero(num1,num2);

    int t,c,s,cnt,i;
    c = 0;
    for(i = 0; i<strlen(num1); i++) {
        t       =  num1[i]-48 + num2[i]-48 + c;
        s       =  t%10;
        c       =  t/10;
        sum[i]  =  s + 48;
    }
    strReverse(sum);
    FirstZeroRemove(sum);

    strReverse(num1);
    strReverse(num2);

    FirstZeroRemove(num1);
    FirstZeroRemove(num2);
}
