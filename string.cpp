#include<iostream>
using namespace std;
void reverse(string &str,int i,int j){
    cout<<"CALL RECIEVE FOR "<<str<<endl;
    //base case 
    if(i>j)
    return ;
swap(str[i],str[j]);
i++;
j--;
//reverse call
reverse(str,i,j);
}
int main(){
string  name="shubham ";
cout<<endl;
reverse(name, 0,name.length()-1);

cout<<endl;
cout<<name<<endl;
return 0;
}