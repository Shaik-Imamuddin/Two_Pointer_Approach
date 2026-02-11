#include<stdio.h>
int main(){
    //input should be two sorted arrays
    int n1,n2;
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

    int res[n1+n2];
    int i=0,j=0,k=0; //arr1,arr2,res for iterationg over 3 arrays

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j])
            res[k++]=arr1[i++];
        else
            res[k++]=arr2[j++];
    }

    //the above loop works till equal length 
    //what if both arrays are different length 
    // here we have to add 2 more loops 

    while(i<n1)
        res[k++]=arr1[i++];
    while(j<n2)
        res[k++]=arr2[j++];

    for(int x=0;x<n1+n2;x++)
        printf("%d ",res[x]);

    return 0;
}