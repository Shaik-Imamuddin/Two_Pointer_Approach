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

    int start=0,end=1;

    while(end<n){
        int diff=arr[end]-arr[start];

        if(diff==k && start!=end){
            printf("%d %d",arr[start],arr[end]);
            return 0;
        }

        if(diff<k)
            end++;
        else
            start++;
        
        if(start==end)
            end++;
    }
    printf("No pair Found");
    return 0;
}