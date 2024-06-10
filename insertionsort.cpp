#include<iostream>
using namespace std;
void insertion(int *arr,int n){
    
    // base case 
    if(n<=1){
        return ;

    }
    // sort first n-1 element 
    insertion(arr,n-1);
    // insert the last element at its correct position 
    int last=arr[n-1];
    int j=n-2;
     while(j>=0&&arr[j]>last){
        arr[j+1]=arr[j];
        j--; 
         }
         arr[j+1]=last;
}
int main(){
    int arr[]={12,11,13,5,6};
    int n=5;
    insertion(arr,n);
    cout<<"sorted array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}