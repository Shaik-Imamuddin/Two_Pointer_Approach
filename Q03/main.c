#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){

    char str[100];
    scanf("%[^\n]",str);

    int start=0,end=strlen(str)-1;

    while(start<end){
        if(isalnum(str[start])==0){
            start++;
            continue;
        }
        
        if(isalnum(str[end])==0){
            end--;
            continue;
        }

        if(tolower(str[start])!=tolower(str[end])){
            printf("Not a Palindrome");
            return 0;
        }

        start++;
        end--;
    }
    printf("Palindrome");
    return 0;
}