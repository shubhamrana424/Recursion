#include<iostream>
using namespace std;
void SortArray(int *arr,int n){
    // base case
    if(n==0|| n==1){
        return ;
    }
    // 1 case solved karlia -largest element ko end me rakh 
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);

    }
}
SortArray(arr,n-1);
}
int main(){
    int arr[5]={2,5,1,6,9};
    SortArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
    
}
