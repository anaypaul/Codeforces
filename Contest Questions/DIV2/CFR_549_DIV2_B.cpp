#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long fun(int n){
    if(n==0){
        return 1;
    }else if(n<10){
        return n;
    }
    return max(9*fun(n/10 - 1) , (n%10)*fun(n/10));
}
int main(){
    int n;
    cin>>n;
    long long p = fun(n);
    cout<<p;
    return 0;
}