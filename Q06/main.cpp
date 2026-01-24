#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

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