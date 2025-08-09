#include <iostream> //reverse an array
using namespace std; 
int main(){ 
    int arr[6]={1,2,3,4,5,6}; 
    int size= sizeof(arr)/sizeof(arr[0]); 
    int low=0; 
    int temp; 
    int high=size-1; 
    while(low<high){ 
        temp=arr[high]; 
        arr[high]=arr[low]; 
        arr[low]=temp; 
        low++; 
        high--; 
        temp=0; 
    } 
    for(int i=0 ; i<size; i++){ 
        cout<<arr[i]<<endl; 
    } 
} 