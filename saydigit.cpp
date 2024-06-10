#include<iostream>
using namespace std;
void SayDifit(int n,string arr[]){
    //base case
    if(n==0)
    return ;
//processing 
int digit=n%10;
n=n/10;
// recursive call
SayDifit(n,arr);
cout<<arr[digit]<<" ";

}
int main(){
    string arr[10]={"zero`","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    SayDifit(n,arr);
    cout<<endl;
    return 0;
}