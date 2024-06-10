#include<iostream>
using namespace std;
void print (int n){
    // base class 
       if(n==0)
      return ;
    
cout<<n<<endl;
// recursive relation
  print(n-1);

}
int main(){
    int n;
    cin>>n;
 print(n);
  return 0;
} 