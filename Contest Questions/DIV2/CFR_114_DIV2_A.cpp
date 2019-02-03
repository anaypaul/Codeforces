#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double n,x,y;
    cin>>n>>x>>y;

    int required = ceil((y/100)*n);
   
    if(x>required){
        cout<<0<<endl;
    }else{
        cout<<required-x<<endl;
    }
    
    return 0;
}