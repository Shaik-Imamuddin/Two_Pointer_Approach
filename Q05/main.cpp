#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}