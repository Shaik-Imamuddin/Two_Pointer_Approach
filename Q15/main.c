#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min=arr[0];
    int maxdiff = arr[1]-arr[0];

    for(int i=0;i<n;i++){
        int diff = arr[i]-min;

        if(diff>maxdiff)
            maxdiff=diff;
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%d",maxdiff);
    return 0;
}