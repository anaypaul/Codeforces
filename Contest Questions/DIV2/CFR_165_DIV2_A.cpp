#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
bool check(int a){
    if(a <60){
        return false;
    }else{
        bool ans;
        for(int i = 3;i<2000 ;i++){
            if(a*i == 180*(i-2)){
                return true;
            }
        }
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        if(check(a)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}