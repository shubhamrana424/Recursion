#include<iostream>
using namespace std;
int countstair(long long nstairs){
    if(nstairs<0){
        return 0;
    }
    
     else if(nstairs==0){
        return 1;
    }
    else{
        int ans=countstair(nstairs-1)+countstair(nstairs-2);
    return ans;
    }

}
int main(){
    int nstairs;
    cin>>nstairs;
    
    cout<<countstair(nstairs)<<" ";
     return 0;
}