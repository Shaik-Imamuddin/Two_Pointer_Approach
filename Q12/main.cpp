#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start=0,target=1;
    while(start<n){
        if(arr[start]==target){
            start++;target++;
        }
        else{
            printf("%d",target);
            return 0;
        }
    }
    printf("%d",target);
    return 0;
}