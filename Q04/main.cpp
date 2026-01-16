#include<iostream>
using namespace std;
int main(){
    int n1,n2;

    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    if(n1!=n2){
        cout<<"Not Equal";
    }

    int start=0;
    while(start<n1){
        if(arr1[start]!=arr2[start]){
            cout<<"Not Equal";
            return 0;
        }
        start++;
    }
    cout<<"Equal";
    return 0;
}