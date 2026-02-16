#include<stdio.h>
int main(){
    int n,target;
    scanf("%d",&n);
    int arr[n];
    //input will be sorted array.
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int start=0,end=n-1;

    while(start<end){
        int sum=arr[start]+arr[end];

        if(sum==target){
            printf("%d %d",arr[start],arr[end]);
            return 0;
        }
        else if(sum<target)
            start++;
        else
            end--;
    }
    return 0;
}