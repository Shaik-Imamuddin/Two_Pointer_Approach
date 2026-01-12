#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[100];
    cin>>str;

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
            printf("Not Plaindrome");
            return 0;
        }
        start++;
        end--;
    }
    printf("Palindrome");
    return 0;
}