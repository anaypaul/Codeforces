#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
string getNum(long long int n){
    if(n==0){
        return "O-|-OOOO";
    }else if(n==1){
        return "O-|O-OOO";
    }else if(n==2){
        return "O-|OO-OO";
    }else if(n==3){
        return "O-|OOO-O";
    }else if(n==4){
        return "O-|OOOO-";
    }else if(n==5){
        return "-O|-OOOO";
    }else if(n==6){
        return "-O|O-OOO";
    }else if(n==7){
        return "-O|OO-OO";
    }else if(n==8){
        return "-O|OOO-O";
    }else if(n==9){
        return "-O|OOOO-";
    }
}
int main(){
    string ans = "";
    long long int n;
    cin>>n;
    if(n==0){
        cout<<getNum(0)<<endl;
        return 0;
    }
    while(n>0){
        long long int r = n%10;
        cout<<getNum(r)<<endl;
        n = n/10;
    }
    return 0;
}