#include<iostream>
using namespace std;

int main(){
    int n,target;
    cin>>n;
    int arr[n];
    //input will be a sorted array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>target;

    int start=0,end=n-1;

    while(start<end){
        int sum=arr[start]+arr[end];    
        if(sum==target){
            cout<<arr[start]<<" "<<arr[end];
            return 0;
        }
        else if(sum<target)
            start++;
        else
            end--;
    }
    return 0;
}