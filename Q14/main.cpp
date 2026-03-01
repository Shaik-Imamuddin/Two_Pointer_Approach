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

    int start=0,end=1;

     while(end<n){
        int diff=arr[end]-arr[start];

        if(diff==k && start!=end){
            cout<<arr[start]<<arr[end];
            return 0;
        }

        if(diff<k)
            end++;
        else
            start++;
        
        if(start==end)
            end++;
    }
    cout<<"No pair Found";
    return 0;
}