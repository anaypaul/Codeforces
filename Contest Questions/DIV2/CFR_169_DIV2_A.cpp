#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long long int joy= -9999999999;
    for(long long int i = 0;i<n;i++){
        long long int f,t;
        cin>>f>>t;
        if(k>= t){
            if(joy < f){
                joy = f;
            }
        }else{
            if(joy < f-(t-k)){
                joy = f-(t-k);
            }
        }
    }
    cout<<joy<<endl;
    return 0;
}