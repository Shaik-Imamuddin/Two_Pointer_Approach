#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);

    int start=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=k){
            arr[start]=arr[i];
            start++;
        }
    }
    
    for(int i=0;i<start;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}