#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int required = n-10;
    if(required <=0){
        cout<<"0"<<endl;
    }else if(required >=1 && required<=9){
        cout<<"4"<<endl;
    }else if( required == 10){
        cout<<"15"<<endl;
    }else if(required ==11){
        cout<<"4"<<endl;
    }else if( required>=12){
        cout<<"0"<<endl;
    }
    
    return 0;
}