#include<iostream>
using namespace std;
int main(){
    int arr[]={64,34,25,12,22,11,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int pass=0 ; pass<n-1 ; pass++ ){//we need to pass through the array n-1 time
        for(int i=0; i<n-pass-1;i++){//after every pass we need to check one less element
            if(arr[i+1]<arr[i]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
    //print sorted array
    for(int i=0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }
}